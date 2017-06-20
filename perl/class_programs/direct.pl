#!/usr/bin/perl
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
	bless $self, $class;
	}
sub cost {
	my $self = shift;
	$self->{cost};
	}
sub name {
	my $self = shift;
	$self->{name};
	}
sub weight {
	my $self = shift;
	$self->{weight};
	}
package grapefruit;

@grapefruit::ISA = qw( fruit );

$grapefruit::costperpound = 2.0;

sub weightcost {
	my $class = ref($_[0]);
	unless ($class) {
		$class = $_[0];
	}
	no strict qw(refs);
	return ${"${class}::costperpound"};
}

sub setweightcost {
	my($class);
	$class = shift;
	no strict qw(refs);
	${"${class}::costperpound"} = $_[0];
	}
sub cost {
my $self = shift;
$self->{weight} * $self->weightcost;
}

package redgrapefruit;

@redgrapefruit::ISA = qw(grapefruit);
$redgrapefruit::costperpound = 3.0;
package main;
my($apple) = new fruit("apple",0.1,0.30);
my($grapefruit) = new grapefruit("grapes",0.2,9.90);
my($redgrapefruit) = new redgrapefruit("redgrapes",4.5,78);

print $apple->name, "cost = ",$apple->cost,"\n";

exit(0);

