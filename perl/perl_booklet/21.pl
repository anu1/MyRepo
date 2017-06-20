#!/usr/bin/perl
use strict;
use warnings;
my $PATH;
my $env1 = `echo  $PATH`;
my $word = split(':',$env1);
print "$word";
print "\n";
