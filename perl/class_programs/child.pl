#!/usr/bin/perl

$a = 'abcd';
$b = 'bad';
@a = split('',$a);
@b = split('',$b);
$count_a = @a;
$count_b = @b;

print "$count_a\n";
print "$count_b\n";

if($count_a <= $count_b) { print "$a is a child to $b.\n";}
else { print "$b is child to $a.\n";}