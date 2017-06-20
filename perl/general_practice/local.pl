#!/usr/bin/perl
#use strict;
use warnings;
$var = 10;
print "\n\n\n";
print "local var before block = $var \n";
print "\n\n\n";
&hello;

print "local var after block = $var \n";
print "\n\n\n";

sub hello {
local $var = 11;
print "local var inside block = $var \n";
$var++;
print "local outside block = $var \n";
print "\n\n\n";
}





