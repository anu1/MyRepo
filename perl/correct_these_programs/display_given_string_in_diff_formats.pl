#!/usr/bin/perl
@arr = qw(1 2 3);
$count = @arr;
print "$count\n";
print $#arr."\n";
print $#arr+1;
print "\n";

$text = "ANU";
      $text1 = lc $text;
      $text2 = "\L$text"
      $text3 = "\L$text\E"
      $text4 =~ tr/A-Z/a-z/;
	  
	  print "$text1\n";
	  print "$text2\n";
	  print "$text3\n";
	  print "$text4\n";
