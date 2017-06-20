#!/usr/bin/perl
use strict;
use warnings;
use 5.010;
use Getopt::Long qw(GetOptions);
 
my $source_address = 'Maven';
GetOptions('from=s' => \$source_address) or die "Usage: $0 --from NAME\n";
if ($source_address) {
    say $source_address;
}
