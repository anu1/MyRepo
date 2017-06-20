#!/usr/bin/perl
#use strict;
use warnings;
my $var1 = 10;
print "\n\n";
print "my var before block = $var1 \n";
print "\n\n";
&hello1;

print "my var after block = $var1 \n";
print "\n\n";

sub hello1 {
$var1 = 11;
print "my var inside block = $var1 \n";
$var1++;
print "my var outside block = $var1 \n";
print "\n\n";
}




