package arith;

use Exporter;

@ISA = qw(Exporter);
@EXPORT =  qw(add);
@EXPORT_OK = qw(sub1);

sub add {
my ($no1,$no2) = @_;
my $result=$no1+$no2;
return $result;
}

sub sub1 {
my ($no1,$no2) = @_;
my $result=$no2-$no1;
return $result;
}
1;
