#!/usr/bin/perl

use strict;
use warnings;

my $filename = $ARGV[0];
my $count;
if(!$ARGV[0]) {
 print " Usage: Enter filename as an argument";
 print "\n";
 }
 open(my $fh,'<',$filename);
 while(<$fh>) {
 if($_ =~ m/count/) { $count++; print $_;}
 }
 print "$count";
 print "\n";
