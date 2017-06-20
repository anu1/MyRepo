#!/usr/bin/perl
use strict;
use warnings;
use v5.10; # for say() function
 
use DBI;
 
# MySQL database configurations
my $dsn = "DBI:mysql:mysql";
my $username = "root";
my $password = '';
 
say "Perl MySQL INSERT Demo";
 
# get user's input links
my @links = get_links();
 
# connect to MySQL database
my %attr = (PrintError=>0,RaiseError=>1 );
my $dbh = DBI->connect($dsn,$username,$password,\%attr);
my $sql = "INSERT INTO pet(name,owner) VALUES(?,?)";
my $stmt = $dbh->prepare($sql);
foreach my $link(@links){
  if($stmt->execute($link->{name}, $link->{owner})){
    say "link $link->{url} inserted successfully";
  }
 
}
$stmt->finish();
$dbh->disconnect();
 
sub get_links{
   my $cmd = '';
   my @links;
   my($name,$owner);
   do{
     say "name:";
     chomp($name = <STDIN>); 
 
     say "owner:";
     chomp($owner = <STDIN>);
     my %link = (name=> $name, owner=> $owner);
	 #print "@links\n";
	 #print \%link."\n";
     push(@links,\%link);
     print("\nDo you want to insert another link? (Y/N)?");
     chomp($cmd = <STDIN>);
     $cmd = uc($cmd);
   }until($cmd eq 'N');
   return @links;
}