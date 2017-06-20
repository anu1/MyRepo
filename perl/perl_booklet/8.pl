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
#if( $_ =~ m/lord/i ) { print $_; }
if( $_ =~ (m/$string1/g || m/$string2/g ) 
{ print $_; }
#if( $_ =~ m/$string/ ) { $count++; }
#if( $_ =~ m/$string/g ) { print $_; }
#if( $_ =~ m/\bon\b/g ) { print $_; }
#if( $_ =~ m/lord/i ) { print $_; }
}
#print "$ARGV[1] occurs $count times in $ARGV[0]";
print "\n";
