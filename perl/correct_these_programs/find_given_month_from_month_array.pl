#!/usr/bin/perl
my @months = qw(jan feb mar apr may june july aug sep oct nov dec);
my %months = ();

my $month = $ARGV[0];
for($x =0; $x <= $#months ;$x++)
{
$months{$months[$x]} = $x;
}
if(defined $months{$month})
{
print "month $month found in original array position $months{$month}\n";
}
else 
{
print "month $month not found\n";
}
