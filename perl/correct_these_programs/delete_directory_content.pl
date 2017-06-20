use strict;
use warnings;

use File::Path;
#check if the program deletes the underlyting files of the directory
#sub main
#{

    my $dir = "/home/anu/perl/dummy";

    rmtree $dir;

    if(-e $dir) 
    {
        print "Directory '$dir' still exists...\n";
    }
    else 
    {
        print "Directory '$dir' deleted.\n";
    }


#}

#main();

