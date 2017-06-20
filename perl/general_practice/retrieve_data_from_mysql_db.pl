#!/usr/bin/perl

use DBI;

my $dsn = "DBI:mysql:database=mysql;host=localhost;port=3306";
my $dbh = DBI->connect( $dsn, "root", "" ) || die $DBI::errstr;

my $sth = $dbh->prepare( "select * from pet" ) || die $dbh->errstr;
$sth->execute() || die $sth->errstr;
while ( my $row = $sth->fetchrow_hashref ) {
    print "Found username: " . $row->{ 'name' } . "\n";
}

$sth->finish;

$dbh->disconnect;


