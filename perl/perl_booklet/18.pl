#!/usr/bin/perl
use strict;
use warnings;
my $filename = $ARGV[0];
open(my $fh, '<', $filename );
while(<$fh>)
{
my @word = split(' ', $_);
print "@word";
}
print "\n";
