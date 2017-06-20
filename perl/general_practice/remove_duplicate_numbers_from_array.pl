#!/usr/bin/perl
#array having duplicates
my @arr = (1,2,2,3,4,4,5,5,5,6,6,1,1,1); 
my %hash;
foreach (@arr)
{
#creating a hash key for each array element. 
#this line  helps in removing duplicates since hash keys cannot
#be duplicated and new  duplicate key overwrites the old key.
 $hash{$_} = undef; 
}
my @res = keys %hash;
print "@res\n"; #prints array without puplicates