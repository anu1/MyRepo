#!/usr/bin/perl

use strict;
use warnings;

package person;

sub new{
my $class = shift;
my $self = {};
};
bless $self, $class;
return $self;
}

package main;
my $obj = person->new();
$obj->{'first'} = "anu";
$obj->{'last'} = "radha";


