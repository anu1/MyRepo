#!/usr/bin/perl
 package A;
 
 sub new {
     my ($class, $param) = @_;
         return bless {param => $param}, $class;
         }
 
 
         package main;
 
         my $a1 = A->new('foo');
         my $a2 = new A('foo');
        my $a3 = A::new('A', 'foo');
