#!/usr/bin/perl

use strict;
use warnings;

my $string = $ARGV[0];
my $first = uc(substr($string,0,1));
my $second = lc(substr($string,1,3));
print "$first$second\n";
