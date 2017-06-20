#!/usr/bin/perl

use strict;
use warnings;

my $filename = $ARGV[0];
my @arr;
my $count;
if(!$ARGV[0]) {
 print " Usage: Enter filename as an argument";
 print "\n";
}
$count = `cat $ARGV[0] | wc -l`;
print "$count\n";
