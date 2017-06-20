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
 open(my $fh,'<',$filename);
 while(<$fh>) {
 $count++;
 push @arr,$_;
 }
 print "###################contents of the file#######################";
 print "\n";
 while(@arr) { print pop @arr; }
 print "#################filename##########################";
 print "\n";
 print "$ARGV[0]";
 print "\n";
 print "number of lines in the given file \n";
 print "$count";
 print "\n";
