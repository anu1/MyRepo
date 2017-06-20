#!/usr/bin/perl

$tel = "1-518-276-8677";
if ($tel =~ /\d-\d{3}-\d{3}-\d{4}/ ) { print "match.\n";}
else {print "no match\n";}

