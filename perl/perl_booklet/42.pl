#!/usr/bin/perl

my $filename = '/etc/passwd';
open(my $fh, '<' , $filename );
while (<$fh>) {
print "$_\n";
}
