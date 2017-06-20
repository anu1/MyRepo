#!/usr/bin/perl

use strict;
use warnings;

my $filename = $ARGV[0];
#my $dirname = "./test/";
if(-e $filename) { print "file exists\n"; }
#if(-d $dirname) { print "Given is a directory and not a file\n"; }
#else { print "Given is a file\n"; }
if(-r $filename) { print "file is readable\n"; }
if(-w $filename) { print "file is writable\n"; }
if(-z $filename) { print "file is plainfile\n"; }
else { print "file is not empty\n"; }
