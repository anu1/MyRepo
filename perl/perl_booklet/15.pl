#!/usr/bin/perl 
use strict;
use warnings;
my $arg = $ARGV[0];
#my $user = `who`;
my $count;
my $user = `ps auxxxwww | grep $arg`;
print "$user";
#if($user =~ m/$arg/ )  { print "$arg is logged in\n"; }
#else  { print "$arg is not logged in\n"; }
if($user eq $arg )  { 
$count++;
print "$count instances of $arg is running\n"; }
else  { print "$arg is not running\n"; }
