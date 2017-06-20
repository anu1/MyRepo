package Shape;

sub new {
    my $class = shift;
#    my $self = {
    #    color  => 'black',
   #     length => 1,
  #      width  => 1,
 #   };
    my $self = [1,2,3];
    return bless $self, $class;
}

1;
