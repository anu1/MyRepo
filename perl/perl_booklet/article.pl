#!/usr/bin/perl
use strict;
use warnings;
my $file = "./article.txt";
my @array;
open(my $fh, "<" , $file);
while(<$fh>) { 
push @array, $_;
}
my $regex1 = qr/(\d{4})/;
my $regex2 = qr/(([a-zA-Z]+\s){1,})/;
my $regex3 = qr/(\d{1,}.?\d{1,}(.)[a-z]+)/;
foreach my $n (@array) { 
if( $n =~ /$regex1/) {  print $1,"\t"; }
if( $n =~ /$regex2/) {  print $1,"\t"; }
if( $n =~ /$regex3/) {  print $1,"\t"; }
print "\n";
}
#print $n,"\n"; }
