#!/usr/bin/perl
use strict;
use warnings;
my $input_file = $ARGV[0];
open( my $fh,"<",$input_file);
while(<$fh>) { 
if($_  !~ "of" && $_ =~ "the") {
print $_;
}
}
