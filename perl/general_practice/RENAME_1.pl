%globals;     
&setGlobals(\%globals);
&printGlobals(\%globals);

sub setGlobals
   {
    $hash = $_[0];
    $hash->{ 'name' } = 'anu';
	$hash->{ 'no' } = '1';
   }
   
sub printGlobals
   {
   # copy of argument precludes extra-scope change
   #my(%globals) = %{$_[0]};
   my(%hash) = %{$_[0]};
   print "name: $hash{'name'}\n";
   print "no: $hash{'no'}\n";
   }