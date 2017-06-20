#!/usr/bin/perl
$var = "test1\n";
sub one {
    print $var;
}
sub two {
    local $var = "test2\n";
    one();
}
one();
two();
one();
