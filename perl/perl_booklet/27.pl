#!/usr/bin/perl
use strict;
use warnings;

use Time::localtime;
my $tm=localtime;
my ($day,$month,$year)=($tm->mday,$tm->month,$tm->year);
print "$day,$month,$year";
print "\n";
