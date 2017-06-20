
#!/usr/bin/perl
my $str=$ARGV[0];

my @rev_str;
my $rev_str ;
my @str=split('',$str);
print "Original string: @str\n";
foreach  my $i (@str)
{
#print "$i\n";
unshift @rev_str , $i;
}
print "Reversed string: @rev_str\n";
$rev_str = join('',@rev_str);
print "$rev_str\n";

if($str eq $rev_str) {print "Success.\n";}
else {print "Failed.\n";}
