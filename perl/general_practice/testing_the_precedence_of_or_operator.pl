#!/usr/bin/perl 
use strict;
use warnings;
my $a = '';
my $b = 5;
my $c = ($a or $b);
my $d = ($a || $b);
print "c : $c\n";
print "d : $d\n";

