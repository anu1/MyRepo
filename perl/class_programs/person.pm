package person;
sub new {
	my $class = shift;
	my $self = {};
	bless $self , $class;
	return $self;
}

sub setFirstName {
	my($self,$firstName) = @_;
	$self->{firstName} = $firstName;
	return $self->{firstName};
}
sub getFirstName {
	my($self) = @_;
	return $self->{firstName};
}
1;
