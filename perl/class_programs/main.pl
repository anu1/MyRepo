#!/usr/local/bin/perl -w

use Student; #first, tell Perl we'll be using the Student class we created

#create two new instances of the class Student (using two different methods)
$s1 = new Student; 
$s2 = Student->new;

#Set the names of each student
$s1->set_name("Paul Lalli");
$s2->set_name("Justin McGuire");

#set the RINs of each student
$s1->set_RIN(123121);
$s2->set_RIN(897907);


#Here we create a hash of students, keyed by name, with RINs as values
%students = ($s1->get_name => $s1->get_RIN, 
	     $s2->get_name => $s2->get_RIN);

#Print out each student's info
foreach $name (keys %students){
    print "Student with name $name has RIN $students{$name}\n";
}