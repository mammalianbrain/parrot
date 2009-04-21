# Copyright (C) 2001-2005, Parrot Foundation.
# $Id$

=head1 NAME

config/auto/cgoto.pm - Computed C<goto>

=head1 DESCRIPTION

Determines whether the compiler supports computed C<goto>.

=cut

package auto::cgoto;

use strict;
use warnings;

use base qw(Parrot::Configure::Step);

use Parrot::Configure::Utils ':auto';

sub _init {
    my $self = shift;
    my %data;
    $data{description} = q{Does your compiler support computed goto};
    $data{result}      = q{};
    return \%data;
}

sub runstep {
    my ( $self, $conf ) = @_;

    my $test = _probe_for_cgoto( $conf );

    $self->_evaluate_cgoto($conf, $test);

    return 1;
}

sub _probe_for_cgoto {
    my $conf = shift;
    my $cgoto = $conf->options->get('cgoto');
    my $test;
    if ( defined $cgoto ) {
        $test = $cgoto;
    }
    else {
        $conf->cc_gen('config/auto/cgoto/test_c.in');
        $test = eval { $conf->cc_build(); 1; } || 0;
        $conf->cc_clean();
    }
    return $test;
}

sub _evaluate_cgoto {
    my ($self, $conf, $test) = @_;
    my $verbose = $conf->options->get('verbose');
    if ($test) {
        $conf->data->set(
            TEMP_cg_h => '$(INC_DIR)/oplib/core_ops_cg.h $(INC_DIR)/oplib/core_ops_cgp.h',
            TEMP_cg_c => <<'EOF',
# generated by config/auto/cgoto.pm

$(OPS_DIR)/core_ops_cg$(O): $(GENERAL_H_FILES) $(OPS_DIR)/core_ops_cg.c
$(OPS_DIR)/core_ops_cgp$(O): $(GENERAL_H_FILES) $(OPS_DIR)/core_ops_cgp.c
$(SRC_DIR)/runcore/cores.c: $(INC_DIR)/oplib/core_ops_cgp.h

$(INC_DIR)/oplib/core_ops_cg.h: $(OPS_DIR)/core_ops_cg.c

$(OPS_DIR)/core_ops_cg.c : $(OPS_FILES) $(BUILD_TOOLS_DIR)/ops2c.pl lib/Parrot/OpsFile.pm lib/Parrot/Op.pm lib/Parrot/OpTrans/CGoto.pm lib/Parrot/OpLib/core.pm
	$(PERL) $(BUILD_TOOLS_DIR)/ops2c.pl CGoto --core

$(INC_DIR)/oplib/core_ops_cgp.h: $(OPS_DIR)/core_ops_cgp.c

$(OPS_DIR)/core_ops_cgp.c : $(OPS_FILES) $(BUILD_TOOLS_DIR)/ops2c.pl lib/Parrot/OpsFile.pm lib/Parrot/Op.pm lib/Parrot/OpTrans/CGP.pm lib/Parrot/OpLib/core.pm lib/Parrot/OpTrans/CPrederef.pm
	$(PERL) $(BUILD_TOOLS_DIR)/ops2c.pl CGP --core
EOF
            TEMP_cg_o => '$(OPS_DIR)/core_ops_cg$(O) $(OPS_DIR)/core_ops_cgp$(O)',
            TEMP_cg_r => '$(RM_F) $(INC_DIR)/oplib/core_ops_cg.h $(OPS_DIR)/core_ops_cg.c \
                    $(INC_DIR)/oplib/core_ops_cgp.h $(OPS_DIR)/core_ops_cgp.c',
            cg_flag => '-DHAVE_COMPUTED_GOTO'
        );
        print " (yes) " if $verbose;
        $self->set_result('yes');
    }
    else {
        $conf->data->set(
            TEMP_cg_h => '',
            TEMP_cg_c => '',
            TEMP_cg_o => '',
            TEMP_cg_r => '',
            cg_flag   => ''
        );
        print " (no) " if $verbose;
        $self->set_result('no');
    }
}

1;

# Local Variables:
#   mode: cperl
#   cperl-indent-level: 4
#   fill-column: 100
# End:
# vim: expandtab shiftwidth=4:
