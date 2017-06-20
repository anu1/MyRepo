#!/usr/bin/perl

use DBI;

my $dsn = "DBI:mysql:database=mysql;host=localhost;port=3306";
my $dbh = DBI->connect( $dsn, "root", "" ) || die $DBI::errstr;

# Display the Server Name (SQL_DBMS_NAME) property.
print "Server:  " . $dbh->get_info( 17 ) . "\n";

# Display the Server Version (SQL_DBMS_VERSION) property.
print "Version: " . $dbh->get_info( 18 ) . "\n";

$dbh->disconnect;


