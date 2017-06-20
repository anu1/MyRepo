package employee;
use person;
use strict;
our @ISA = qw(person);

sub new {
	my ($class) = @_;
	my $self = $class->SUPER::new($_[1], $_[2], $_[3] );
	$self->{id} = undef;
	$self->{title} = undef;
	bless $self , $class;
	return $self;
}

sub getFirstName {
	my ($self) = @_;
	print("this is a child class function\n");
	return $self->{firstName};
}	

sub setLastName {
	my( $self, $lastName ) = @_;
	$self->{lastName} = $lastName;
	return $self->{lastName};
}

sub getLastName {
	my($self) = @_;
	return $self->{lastName};
}
1;

