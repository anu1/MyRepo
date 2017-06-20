#!/usr/bin/perl
#
use strict;
use warnings;
my $filename = $ARGV[0];
my $string = $ARGV[1];
my $count;
open(my $fh, '<' ,$filename);
while(<$fh>) {
if( $_ =~ m/$string/ ) { $count++; }
}
if($count == 1) {
print "$ARGV[1] occured $count time in $ARGV[0]";
} else {
print "$ARGV[1] occured $count times in $ARGV[0]";
}
print "\n";
