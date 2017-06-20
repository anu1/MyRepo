#!/usr/bin/perl

%hash = #hash map of format name => age
(
 "ganesh" => "26",
 "kumaresh" => "27",
 "kannan" => "30",
);
foreach $value (sort {$a <=> $b} values(%hash))
{
 print "$value\n"
}