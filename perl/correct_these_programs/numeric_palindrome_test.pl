#!/usr/bin/perl

$n = <>;
print $n;

$orignalInteger = n;
$reversedInteger = 0;
$remainder = 0;
while( $n!=0 )
    {
        $remainder = n%10;
		print "$remainder\n";
        $reversedInteger = $reversedInteger*10 + $remainder;
		print "$reversedInteger\n";
        $n /= 10;
    }

     # palindrome if orignalInteger and reversedInteger are equal
    if (originalInteger == reversedInteger)
        { printf "$originalInteger is a palindrome.\n"; }
    else
       { printf "$originalInteger is not a palindrome.\n"; }
    

	