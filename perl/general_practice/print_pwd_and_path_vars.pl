use Env qw(@PATH PWD);

print "PWD: $PWD\n";
print "PATH: \n";

foreach (@PATH) {
  print "$_\n";
}