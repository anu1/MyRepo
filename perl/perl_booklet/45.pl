#!/usr/bin/perl

use strict;
use warnings;
my $str = trim_string(" Jack and Jill ");
print $str,"\n";
sub trim_string {
my $s = shift; 
$s =~ s/^\s+|\s+$//g; return $s;
}
