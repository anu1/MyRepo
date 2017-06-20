#!/usr/bin/perl
use strict;
use warnings;
my @fruits = ('apple', 'red', 'orange', 'orange', 'grape', 'purple');
my $count = $#fruits+1;
my @fruits2;
print "$count\n";
foreach my $i (@fruits)
{
 print $i;
 @fruits2 = push $i;
}

print "We've got @fruits2\n"
