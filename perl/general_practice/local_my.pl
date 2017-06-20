#!/usr/bin/perl
use strict;
use warnings;
my $var = 4;

print "Before : $var\n";
&hello;
print "After : $var\n";

sub hello {
my $var = 10;
$var++;
&world; 
}

sub world {
print "Inside subroutine : $var\n";
}


