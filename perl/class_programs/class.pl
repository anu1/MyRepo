#!/usr/bin/perl
#
use strict;
package fruit;
sub new {
my $class = shift;
my $self = {};
if(defined $_[0]) {
$self->{name} = shift;
}
if(defined $_[0]) {
$self->{weight} = shift;
}
if(defined $_[0]) {
$self->{cost} = shift;
}
bless $self,$class;
}
sub cost{
my $self = shift;
$self->{cost};
}
sub name{
my $self = shift;
$self->{name};
}
package main;
my($apple) = new fruit("apple1",.1,.30);
print $apple->name, " cost:",$apple->cost,"\n";
exit(0);

