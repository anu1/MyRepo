#!/usr/bin/perl

use Digest::SHA qw( sha1_base64 );
use Data::Dumper;
use DBI;

my $dsn = "DBI:mysql:database=mysql;host=localhost;port=3306";
my $dbh = DBI->connect( $dsn, "root", "" ) || die $DBI::errstr;

my $cmd = shift( @ARGV ) || &ShowHelp();

if ( $cmd eq "add" ) {
    my $name = shift( @ARGV ) || &ShowHelp();
    my $owner = shift( @ARGV ) || &ShowHelp();

    my $rows = $dbh->do( "insert into pet ( name , owner ) 
        values ( ?, ? )", undef, lc $name, $owner
    );

    if ( ! $rows ) {
        die "Error: " . $dbh->errstr;
    }
    elsif ( $rows eq "0E0" ) {
        print "No users updated\n";
    }
    elsif ( $rows > 0 ) {
        print "$rows user(s) added\n";
    }
}
elsif ( $cmd eq "dump" ) { 
    my $sth = $dbh->prepare( "select * from pet" ) || die $dbh->errstr;
    $sth->execute || die $sth->errstr;

    while ( my $row = $sth->fetchrow_hashref ) {
        print Dumper( $row );
    }

    $sth->finish;
}
else {
    &ShowHelp();
}

$dbh->disconnect;

sub ShowHelp {
    print "Usage:\n";
    print "\t$0 <command> [options]\n";
    print "\n";
    print "Commands:\n";
    print "\tadd\tAdd new pets to the database\n";
    print "\t\tOptions: name owner\n";
    print "\n";
    print "\tdump\tDump the database contents\n";
    print "\n";
    exit 0;
}

