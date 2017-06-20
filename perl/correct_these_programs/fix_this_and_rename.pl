#!/usr/bin/perl
my %name = (
	name => "anu",
	number => 123,
	addr => sanjose
	);
foreach my $keys (keys %name) {
    push(@array,$keys);
}
print "@array";