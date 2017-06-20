#!/usr/bin/perl
use strict;
use warnings;
my %food =   ('apple' => 'red','rice' => 'white', 'banana' => 'yellow');
my %fruits = ('beet' => 'red', 'banana' => 'yellow' , 'plum' => 'red');
my $out = "food\{%s\}\n";
#equals fruits\{%s\}\n";

for my $g ( sort keys %food ) {
    for my $m ( sort keys %fruits ) {
    printf $out, $g, $m if ( $food{$g} eq $fruits{$m} );
    }
}
print "\n";
