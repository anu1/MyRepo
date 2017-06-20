#!/usr/bin/perl -w
opendir(DIR, ".");
@files = readdir(DIR);
closedir(DIR);
#foreach $file (@files) {
print "@files\n";
#} 