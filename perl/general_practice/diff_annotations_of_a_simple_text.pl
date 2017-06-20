#!/usr/bin/perl
print "Enter text: ";
$text = <STDIN>;
chomp $text;
print "Using no commands: $text\n";
print "Using the \\l command: \l$text\n";
print "Using the \\u command: \u$text\n";
print "Using the \\L command: \L$text\n";
print "Using the \\U command: \U$text\n";
print "Using the \\Q command: \Q$text\E\n";
