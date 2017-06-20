
#!/usr/bin/perl
open(MYFILE,$ARGV[0]);
@array = <MYFILE> ;
#print @array ;
$numline = @array;
$numprintline = $numline - $ARGV[1] ;
while($numprintline != $numline)
{
        print "$array[$numprintline]" ;
        $numprintline++;
}