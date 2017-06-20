#!/usr/bin/perl
use strict;
use warnings;
my @arr = ("zoo", "zao", "monkey", "banana", "tree");
my @numbers = (11,34,21,22,65,43,32);
my @arr2 = sort { $a cmp $b } @arr;
my @numbers2 = sort { $a <=> $b } @numbers;
print "@arr2\n";
print "@numbers2\n";


