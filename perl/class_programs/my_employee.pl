#!/usr/bin/perl

use employee;
$obj = new employee("anu","radha",123);
$firstName = $obj->getFirstName();
print "Before setting first name is : $firstName\n";

$obj->setFirstName("Anu");
$firstName = $obj->getFirstName();
print"After setting first name is : $firstName\n";

