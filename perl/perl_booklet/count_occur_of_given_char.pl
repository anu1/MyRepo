#!/usr/bin/perl

use strict;
 
use warnings;
 
my $string="APerlAReplAFunction";
 
my $counter = ($string =~ tr/A//);
 
print "There are $counter As in the given string\n";
 
print $string\n;
