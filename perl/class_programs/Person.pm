package Person;
sub new
{
    my $class = shift;
    my $self = {
        firstName => shift,
        lastName  => shift,
        ssn       => shift,
    };
    # Print all the values just for clarification.
    print "First Name is $self->{firstName}\n";
    print "Last Name is $self->{lastName}\n";
    print "SSN is $self->{ssn}\n";
    bless $self, $class;
    return $self;
}
sub setFirstName {
    my ( $self, $firstName ) = @_;
    $self->{firstName} = $firstName if defined($firstName);
    return $self->{firstName};
}

sub getFirstName {
    my( $self ) = @_;
    return $self->{firstName};
}
1;