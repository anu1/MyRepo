#!/usr/bin/perl
@strings = ("Fred","Jane","Alice","Fred","Harry","Alice");
@sortuniq = grep($last eq $_ ? 0 : ($last = $_, 1), sort @strings);
print "@sortuniq\n";
#print sort @strings , "\n";
#@sortuniq = sort grep((! $seen{$_}++),@string);
print "@sortuniq\n";

