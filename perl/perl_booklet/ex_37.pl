#!/usr/bin/perl
use strict;
use warnings;
my %hash = ( d => 12, b=>20, g=>2, a=> 6);
foreach my $key (sort keys %hash) {
print "$key=>$hash{$key}";
print " ";
}
#print "Key: $_ and Value: $hash{$_}\n" foreach (keys%hash);
print "\n";
