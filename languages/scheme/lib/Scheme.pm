# $Id$
# Copyright (C) 2001-2007, The Perl Foundation.

package Scheme;

# pragmata
use strict;
use warnings;
use 5.008;

use Data::Dumper;

use Scheme::Tokenizer   ();
use Scheme::Parser      ();
use Scheme::Generator   ();
use Scheme::Builtins;

=head1 SUBROUTINES

=head2 new

A constructor.

=cut

sub new {
    my ( $class, $file ) = @_;

    return bless { file => $file }, $class;
}

=head2 link_functions

Generate PIR.
Make sure that the used functions end up in the PIR.

=cut

sub link_functions {
    my ($main) = @_;

    my @function = ($main);
    my @missing  = @{ $main->{functions} };
    my @provides = keys %{ $main->{scope} };

    my $code   = $main->{code};
    my $header = <<'END_HEADER';
# PIR generated by Scheme.

# for development only
.include 'library/dumper.pir'

# the .loadlib directive gets run, before the .HLL_map below
# is parsed, therefore the .DynLexPad constant is already available
.loadlib "dynlexpad"
.HLL "SomethingWithScheme", "dynlexpad"
.HLL_map 'LexPad', 'DynLexPad'

# builtin functions used by this program:
END_HEADER

    while (@missing) {
        my $miss = shift @missing;

        my $link = Scheme::Builtins->generate($miss);
        $header .= <<"END";
    # $miss
END

        push @function, $miss;

        if ( $link->{functions} ) {
            push @missing, $link->{functions};
        }

        # XXX: Move Generator::_format_columns to own class
        Scheme::Generator::_format_columns($link);
        $code .= $link->{code};
    }

    return $header . $code;
}

=head2 compile

This is called in schemec.

=cut

sub compile {
    my $self = shift;

    my $tokens = Scheme::Tokenizer::tokenize( $self->{file} );
    # die Dumper( $tokens );
    my $tree   = Scheme::Parser::parse( $tokens );
    # die Dumper( $tree );

    return link_functions( Scheme::Generator::generate( $tree ) );
}

1;

# Local Variables:
#   mode: cperl
#   cperl-indent-level: 4
#   fill-column: 100
# End:
# vim: expandtab shiftwidth=4:
