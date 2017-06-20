#!/usr/bin/perl
use strict;
use warnings;

my @array = ("plum","banana","blueberry","mulberry","apple","pear");
my @s = sort {length $a <=> length $b} @array;
foreach my $i ( @s) {
print $i;
print "\n";
}
