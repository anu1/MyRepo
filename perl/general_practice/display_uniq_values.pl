#! /usr/bin/perl -w

use strict;
	
sub uniq{
	my %temp_hash = map { $_, 0 } @_;
	return keys %temp_hash;
}

my @test_array = qw/ 1 3 2 4 3 2 4 7 8 2 3 4 2 3 2 3 2 1 1 1 /;
my @uniq_array = uniq(@test_array);
print "@uniq_array\n";