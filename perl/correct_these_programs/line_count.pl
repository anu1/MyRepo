#!/usr/bin/perl 
my $count = $ARGV[1]; 
print "$count"."\n";
# ---> the number of lines to be printed
while(<>) { #----> reading file passed as arg
my $x = $.;  #-----> assigning line number to $x
if ( $count >= $x ) 
{ print "line number $x: $_"."\n"; } 
else { exit; } 
} 