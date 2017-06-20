#!/usr/bin/perl

#use strict;
use warnings;

my @array1;
my @array2 ;
my  %food = ('apple' => 'red', 'rice' => 'white', 'banana' => 'yellow', 'tomato' => 'red', 'spinach' => 'green'); 
my  %fruits = ('plum' => 'red', 'banana' => 'yellow', 'blueberry' => 'blue', 'mulberry' => 'black', 'apple' => 'red', 'pear' => 'green');
foreach my $item1 (keys( %food)) {
	foreach my $item2 (keys( %fruits)) {
		if ($item2 eq $item1) { print "$item1\n";}
        }
}
foreach my $item1 (keys(%food)) {
push (@array1, $item1);
}
print "Array_food: @array1\n";

foreach my $item2 (keys(%fruits)) {
push (@array2, $item2);
}
print "Array_fruits: @array2\n";
	 

