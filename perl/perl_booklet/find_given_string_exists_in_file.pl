#!/usr/bin/perl
#use strict;
use warnings;
 
my $filename = shift;
my $search_string = $ARGV[0];
open(my $fh, $filename)
  or die "Could not open file '$filename' $!";
 
while (<$fh>) {
  if($_ =~ $search_string) { print "found\n";}
}
