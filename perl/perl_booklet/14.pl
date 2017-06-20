#!/usr/bin/perl
#
use strict;
use warnings;
my $filename = $ARGV[0];
my $string1 = $ARGV[1];
my $string2 = $ARGV[2];
my $count;
open(my $fh, '<' ,$filename);
while(<$fh>) {
if( $_ =~ m/$string1/g || $_ =~ m/$string2/g  )
{ print $_; }
}
print "\n";
