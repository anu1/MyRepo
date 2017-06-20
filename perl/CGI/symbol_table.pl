use Symbol::Table;

  # constructor takes two arguments, 
  # which TYPE of symbols (PACKAGE,CODE,SCALAR,ARRAY,HASH)
  # and what package namespace do you wish to examine
  # the return value is a symbol table object.
  my $st_pkg = Symbol::Table->New('PACKAGE', 'main');

  # the keys to a PACKAGE type symbol table are all the 
  # sub packages under the objects namespace.
  # For all other types, the keys are the names of the
  # symbols (of that TYPE) in the objects namespace.
  foreach my $subpkg (keys(%$st_pkg))
        {
        print "package main contains package '$subpkg'\n";
        }
		