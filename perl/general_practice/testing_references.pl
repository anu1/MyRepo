   
    $a_scalar = anu;
	my $scalar_ref = \$a_scalar;
	print $scalar_ref."\n";
    @a_array = qw(1 2 3);
	my $array_ref = \@a_array;
	print $array_ref."\n";
    %a_hash = (name => "anu",number => 12345);
    my $hash_ref = \%a_hash;
    print $hash_ref."\n";
	$name = ${$hash_ref}{ name };