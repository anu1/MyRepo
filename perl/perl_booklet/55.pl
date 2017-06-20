#!/usr/bin/perl
use strict;
use warnings;
my %freq;
my $line;
my $word;
my $count;
my @array;
my $filename = "./ring.txt";
open(my $fh, '<' ,$filename);
while ( my $line = <$fh> ) {
chomp($line);
for $word (split(' ', $line)) {
$count = $freq{$word}++ + 1;
push(@array, $word);
print "$word freq is $count\n";
}
}
#print "$word freq is $count\n";
print "@array\n";
