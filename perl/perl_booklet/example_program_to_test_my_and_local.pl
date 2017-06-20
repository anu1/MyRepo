#!/usr/bin/perl
$test = 2.3456;
 
{
 
my $test = 3;
 
print "In block, $test = $test \n";
 
print "In block, $:: test = $::test \n";
 
}
 
print "Outside the block, $test = $test \n";
 
print "Outside the block, $:: test = $::test \n";
print "\n";
