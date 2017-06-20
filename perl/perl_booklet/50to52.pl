#!/usr/bin/perl

use strict;
use warnings;

opendir my $dir, "." or die "Cannot open directory: $!";
my @files = readdir $dir;
closedir $dir;
#print "@files\n";
for my $key(@files) 
{
if($key =~ m/.txt$/ ) {
print "$key\n"; 
}
#if(-d $key) { print "$key\n"; }
}

