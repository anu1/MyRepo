#!/usr/bin/perl
use strict;
use warnings;
my $input_file = $ARGV[0];
open(my $fh, "<" , $input_file);
while(<$fh>){
if($_ =~ m/[a-z]{10,}/g)
{
print $_;
}
}