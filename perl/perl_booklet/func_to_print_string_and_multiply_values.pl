#!/usr/bin/perl
$calculate=cal(5,6);
sub cal{
$first=shift;
$second=shift;
print_l("HEllO");
sub print_l
{
print shift;
print "\n";
}
return $first*$second;
}
print $calculate."\n";
