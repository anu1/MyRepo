#!/usr/bin/perl
opendir(FD,"/home/anu/perl/dummy");# ---------> open tmp directory .Its just like open function
my @arr = readdir(FD); #--------> read all the files in temp directory
closedir(FD);
print "list of files @arr\n";
unlink(@arr);# -------> remove all the files
rmdir("/home/anu/perl/dummy"); #-------> remove tmp directory