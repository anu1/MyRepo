#!/usr/bin/perl
use strict;
use warnings;

my %hash1;
my %hash2;
get_list_hash(%hash1,%hash2);
sub get_list_hash {
%hash1 = {"apple"=>"red","banana"=>"yellow","pear"=>"green"};
%hash2 = {"banana"=>"yellow","pine"=>"yellow"};
for my $key1(keys %hash1)
{
for my $key2(keys %hash2){
if ($key1 eq $key2) {  print "$key1\n"; }
}
}
}

