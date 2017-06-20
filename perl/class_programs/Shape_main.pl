#!/usr/bin/perl
#
push (@Inc,'pwd');
use strict;
use warnings;
use feature qw/say/;
use Shape;

# create a new Shape object
my $shape = Shape->new;

# print the shape object attributes
say $shape->$_[0];
say $shape->$_[1];
say $shape->$_[2];
