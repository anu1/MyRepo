#!/usr/bin/perl
my %name = (
	name => "anu",
	number => 123,
	addr => sanjose
	);
foreach my $key (keys %name) {
    push(@array,$key);
}
print "@array";
print "\n";
