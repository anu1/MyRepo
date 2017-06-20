#!/usr/bin/perl
use strict;
my(@countries)=();
while(<>) {
chop;
my($country, $pop, $size) = split(/,/,$_);
push(@countries, {
	country => $country,
	pop => $pop,
	size => $size,
	});
	}
my($country);
print "countries by population\n";
for $country (sort { ($::b->{pop}) <=> ($::a->{pop})} @countries) {
#for $country(@countries) {
print "\t$$country{country}\n";
}
print "countries by size\n";
for $country (sort { ($::b->{size}) <=> ($::a->{size})} @countries ) {
print "\t$$country{country}\n";
}

