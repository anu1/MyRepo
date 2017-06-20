#!/usr/bin/perl

use strict;
use warnings;
my @array1;
my @array2;
my $count1;
my $count2;
get_array_count_diff(@array1,@array2);

sub get_array_count_diff {

@array1 = ( 12,15,32,67,43 );
@array2 = ( 98,45,65,11,67,21,56 );
$count1 = $#array1+1;
$count2 = $#array2+1;
print"$count1\n";
print"$count2\n";
my $diff = $count2 - $count1;
print "Difference between two elements $diff\n";
}

