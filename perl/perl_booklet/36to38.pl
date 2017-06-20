#!/usr/bin/perl
use strict;
use warnings;
#my $arg = $ARGV[0];
#my %food=('apple'=>'red','banana'=>'yellow','tomato'=>'red','spinach'=>'green','lemon'=>'yellow');
my %hashes = ( d => 12, b =>20,c=>8, g=>2, a=>6, e=>1, h=>13 ,f=>5);
#for my $key(sort keys %food)
#{
#if($ARGV[0] eq $key ) {
#print "$ARGV[0] is present as a key in this hash\n";
#}
#else { print "We've got no $ARGV[0]\n"; 
#}
#}
#foreach  my $value(sort {$a <=> $b} values %hash)
foreach my $key  (sort { $hashes{$a} <=> $hashes{$b} } keys %hashes)
{
print "{$key} -> $hashes{$key}\n";
}
