#!/usr/bin/perl

use strict;
use warnings;

package fruit;
#require Exporter;
#my @ISA = qw(Exporter);

#my @EXPORT = qw(fruitnamedetails);
#class contructor
sub new {
my $class = shift;
my $fruitdata = { 
fruitname => shift,
quantity => shift,
price => shift
};
bless $fruitdata, $class;
print("Constructor Invocation - \n");
print("Fruitname: ".$fruitdata->{fruitname}."\n");
print("quantity: ".$fruitdata->{quantity}."\n");
print("price: ".$fruitdata->{price}."\n");
return $fruitdata;
}

#class method
sub fruitnamedetails {
my ($fruitdetails) = @_;
return $fruitdetails->{fruitname};
}

package main;
my $fruitdata = new fruit("Apple",10,20.25);
my $fruitname = $fruitdata->fruitnamedetails();
print "call from main - \n";
print "fruit name : $fruitname\n\n";
print "\n\n";


