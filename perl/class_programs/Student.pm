package Student;  #tell Perl we're creating a new class called Student

sub new{ #begin constructor
    my $class = shift;  #class name is first argument passed to function
    my $ref = {Name => "", ID => 0}; #initialize class variables
    bless($ref, $class); #associate reference with this class
    return $ref;  #return the new class object
}

#Now we have two class methods to set variables, and two to read variables
sub set_name{
    my $ref = shift; #get the object we're operating on
    my $name = shift; #get the value of the name passed in
    $ref->{'Name'} = $name;  #assign the Name parameter to be what was passed in
}

#this function is virtually identical to the first
sub set_RIN{
    my $ref = shift;
    my $rin = shift;
    $ref->{'RIN'} = $rin;
}

#now we have two functions to read the values stored
sub get_name{
    my $ref = shift;  #get the object we're operating on
    my $name = $ref->{'Name'}; #find the Name parameter of that object
    return $name; #return that parameter
}

#deja vu
sub get_RIN{
    my $ref = shift;
    return $ref->{'RIN'};
}

1;


