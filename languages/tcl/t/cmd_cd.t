#!/usr/bin/perl

use strict;
use warnings;
use lib qw(tcl/lib ./lib ../lib ../../lib ../../../lib);
use Parrot::Test tests => 3;
use Test::More;
use File::Temp qw/tempdir/;
use File::Spec;

language_output_is("tcl",<<'TCL',<<OUT,"cd too many args");
 cd a b
TCL
wrong # args: should be "cd ?dirName?"
OUT

language_output_is("tcl",<<'TCL',<<"OUT","cd home");
 cd
 puts [pwd]
TCL
$ENV{HOME}
OUT


{
    my $testdir = tempdir( CLEANUP => 1 );
    $^O eq 'MSWin32' and $testdir =~ s/\\/\\\\/g;
    my $expdir = File::Spec->canonpath( $testdir );
    language_output_is("tcl",<<"TCL",<<"OUT","cd home");
 cd $testdir
 puts [pwd]
TCL
$expdir
OUT
}
