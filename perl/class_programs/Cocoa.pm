package Cocoa;
 require Exporter;

 @ISA = qw(Exporter);
@EXPORT = qw(setImports, declareMain, closeMain);
  
  #
 # This routine creates the references for imports in Java functions
  #
 sub setImports{
     my $class = shift @_;
     my @names = @_;
 
     foreach (@names) {
      print "import " .  $_ . ";\n";
      }
    }
 
 #
 # This routine declares the main function in a Java script 
 #
 sub declareMain{
     my $class = shift @_;
     my ( $name, $extends, $implements) = @_;
 
      print "\n public class $name";
      if ($extends) {
           print " extends " . $extends;
      }
      if ($implements) {
           print " implements " . $implements;
      }
    print " { \n";
 }
 
 #
 # This routine declares the main function in a Java script 
 #
 sub closeMain{
    print "} \n";
 }
 
 #
 #  This subroutine creates the header for the file. 
 #
sub new {
     my $this = {};
     print "\n /* \n ** Created by Cocoa.pm \n ** Use at own risk \n */ \n";
     bless $this;
     return $this;
     }
 
 1;