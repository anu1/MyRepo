#!/usr/bin/perl 
use strict;
use warnings;
my @colors = ('red','yellow','green','white','blue','magenta','black','cyan');
my @nums = (5,10,15,25,20,24,30,33,40,31,5,15,33); 

####temporary arrays#####
my @sortnums = sort {$a <=> $b} @nums;
my @sortnums1 = sort {$b <=> $a} @nums;
my @lengthsort = sort { length ($b) <=> length($a)} @colors;
my @uniq_words = uniq(@nums);

####code to find unique values####
my %seen;
my @dup;
sub uniq {
return grep { !$seen{$_}++ } @_;
}

#####code to find duplicate values####
foreach my $string (@nums) {
next unless $seen{$string}++;
push @dup, $string;
}


print "Sort based on string length: @lengthsort\n";
print "Ascending order: @sortnums\n";
print "Descending order: @sortnums1\n";
print "Uniq array: @uniq_words\n";
print "@dup are duplicated.\n";
print "\n";



### code to sort strings based on numeric values ####
my @guys = ('geek3', 'geek9','geek4','dumb8','dumb2','geek5','dumb10','geek1','dumb10','geek1','geek12','geek13','dumb14');
my @sortonnumbers = sort { substr($a,4) <=> substr($b,4) } @guys;
print "array numeric sorted: @sortonnumbers\n";
