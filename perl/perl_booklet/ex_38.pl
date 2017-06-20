#!/usr/bin/perl
use strict;
use warnings;
my %hash = ( d=>12, b =>20, g=>2, a=>6, c=>8, f=>5);
sub hashValueAscendingNum {
   $hash{$a} <=> $hash{$b};
   }
foreach my $key (sort hashValueAscendingNum keys %hash) {
print "$key=>$hash{$key}";
print "\n";
}
