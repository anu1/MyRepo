#!/usr/bin/perl
package Person;
sub new {
 my $ref = {Name => "", Age => 0};
 bless ($ref, Person);
 return $ref;
}