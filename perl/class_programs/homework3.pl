#!/usr/local/bin/perl

#declare subroutines to be used
sub StartOrder();
sub DispInventory();
sub Search();
sub Add();
sub Remove();
sub DispOrder();
sub Submit();
sub Menu();

$order_started = 0; #global flag set when StartOrder() called.

#################MAIN###################

if (@ARGV != 1){
    die "Usage: $0 <inventory file>\n";
} 
open (INV, $ARGV[0]) || die "Error: Cannot open inventory file: $!\n";

#read inventory file.  Store products in hash keyed by product number.
foreach $product (<INV>){
    ($code, $title, $price) = split(/\|/, $product);
    $price =~ s/\$//; #get rid of the dollar sign - it'd cause problems;
    chomp($price); #so would the new line;
    $code = uc($code); #make code all upper-case
    #create anonymous reference to hash, store as value to inventory hash
    $inventory{$code} = {title => $title, price => $price}; 
}

close INV;

#continuously present the user with the menu.  Program exits when Submit 
#function is called
while (1){
    Menu;
}

#End of Main.  Remainder of program called through subroutines

################SUBROUTINES############
    
###MENU()###
sub Menu(){
    #present user with list of options, and take in user's selection.
    print "1) Begin Order\n";
    print "2) Display Entire Inventory\n";
    print "3) Search for Item in Inventory\n";
    print "4) Add Item to Order\n";
    print "5) Remove Item from Order\n";
    print "6) Display current Order\n";
    print "7) Submit Order and Exit Program\n\n";
    print "Choose an option above: ";
    chomp ($choice = <STDIN>);
    print "\n";

    #call appropriate function.
    if ($choice == 1){
	StartOrder;
    } elsif ($choice == 2){
	DispInventory;
    } elsif ($choice == 3){
	Search;
    } elsif ($choice == 4){
	Add;
    } elsif ($choice == 5){
	Remove;
    } elsif ($choice == 6){
	DispOrder;
    } elsif ($choice == 7){
	Submit;
    } else{
	print "Sorry, that is not a valid option.  Please try again.\n";
    }
}#End of Menu();

###START ORDER###

sub StartOrder(){
    #make sure the order hasn't already been started.
    if ($order_started){
	print "Error: Order has already been started\n";
	return;
    }

    #set the global flag.
    $order_started = 1;
    
    #open the order file and declare the hash that will contain the order.
    open (ORDER, ">order.txt") || die "Error: Cannot open order file: $!\n";
    print "Order Started.  File is order.txt\n";
    %order;
}#End of StartOrder();

###DISPLAY INVENTORY###

sub DispInventory(){
    
    #Go through inventory hash, print out title, product code, and price
    foreach $code (keys %inventory){
	$title = $inventory{$code}->{title};
	$price = $inventory{$code}->{price};
	print "PRODUCT: $code\n";
	print "\t$title\n";
	print "\t\$$price\n";
    }
}#End of DispInventory();

###ADD ITEM###

sub Add(){
    #Make sure we've started an order.
    if (!$order_started){
	print "Sorry, you must begin an order before choosing this option\n";
	return;
    }

    print "Enter the Product Code of the item you wish to order: ";
    chomp ($code = <STDIN>);
    $code = uc($code);
    #make sure the product code is actually in the inventory.
    if (!exists ($inventory{$code})){
	print "Sorry, no item exists with that product code\n";
	return;
    }
    $title = $inventory{$code}->{title};

    #Determine if product has already been ordered.
    if (exists($order{$code})){
	print qq(You are currently ordering $order{$code} cop) .
	    ($order{$code}==1 ? "y" : "ies") .
	    qq(of "$title"\n);
	print "How many additional copies would you like to order?\n";
    } else {
	print "How many copies of \"$title\" would you like to order?\n";
    }

    #find out out many copies to add, add that many, print status msg.
    chomp ($num = <STDIN>);
    $order{$code} += $num;
    print qq($num cop) .
	($num == 1 ? "y" : "ies") .
	qq( of "$title" ha) .
	($num == 1 ? "s" : "ve") .
	qq( been added to the order\n);
}#end of Add();

###REMOVE ITEM###

sub Remove(){
    #make sure an order has been started
    if (!$order_started){
	print "Sorry, you must begin an order before choosing this option\n";
	return;
    }
    print "Enter the Product Code of the item you wish to remove from the order: ";
    chomp ($code = <STDIN>);
    $code = uc($code);
    #make sure this product code exists in the inventory
    if (!exists ($inventory{$code})){
	print "Sorry, no item exists with that product code\n";
	return;
    }
    $title = $inventory{$code}->{title};    
    
    #make sure order contains at least one copy of the product entered
    if (!exists ($order{$code})){
	print "You are not currently ordering any copies of \"$title\"\n";
	return;
    }

    #if only one copy ordered, remove entire entry in the hash
    if ($order{$code} == 1){
	delete $order{$code};
	print "\"$title\" has been removed from your order\n";
    } #otherwise, ask how many to remove 
    else {
	print "You are currently ordering $order{$code} copies of \"$title\"\n";
	print "How many of them would you like to remove from your order?\n";
	chomp ($num = <STDIN>);
	#make sure the user's not being dumb...
	while ($num > $order{$code}){
	    print "You can't remove more copies than you have in your order\n";
	    print "How many copies do you wish to remove?\n";
	    chomp ($num = <STDIN>);
	}
	#subtract correct number of copies from the order
	$order{$code} -= $num;
	#if we've removed them all, remove entire entry from hash
	if ($order{$code} == 0){
	    delete $order{$code};
	    print qq("$title" has been removed from your order\n);
	} else {
	    print qq($num copies of "$title" have been removed from your order\n);
	}
    }
}#end Remove()

###DISPLAY ORDER###

sub DispOrder(){
    #see if there's anything to display
    if (keys (%order) == 0){
	print "Your order is currently empty\n";
	return;
    }

    print "Your order contains the following item(s)\n\n";

    #grand total is lexical variable - so it gets reset each time through
    my $grand_total = 0;

    #go through order, compute total for each item, 
    #print title, code, and price of each item,
    #add to grand total.
    foreach $code (keys %order){
	my $title = $inventory{$code}->{title};
	my $price = $inventory{$code}->{price};
	my $num = $order{$code};
	$total = $price * $num;

	print "$num cop".($num == 1 ? "y" : "ies")." of \"$title\" ($code)\n";
	print "at a price of \$$price each = \$$total\n\n";

	$grand_total += $total;
    }
    print "Total order price = \$$grand_total\n";
}#End of DispOrder();

###SUBMIT ORDER###

sub Submit(){
    
    #first, see if we have anything to submit
    if (!$order_started){
	print "No order started.  Nothing to submit!\n";
    } elsif (keys %order == 0){
	print "Your order is empty.  Nothing to submit!\n";
    }else{
	#change the default output filehandle to be the order file,
	#then simply call the DisplayOrder function
	select ORDER;
	DispOrder();
	select STDOUT; #make Standard out default filehandle again.
	print "Order submitted.  Thank you, and have a nice day\n";
	close ORDER;
    }
    exit; #exit the program.
}#End of Submit();

###Search for Item###

sub Search(){
    #make list of matching items local - get new copy each time search is run
    my @returns;

    #get query from the user
    print "Please enter a search query: \n";
    chomp ($query = <STDIN>);

    #determine which method of searching the user is using
    if ($query =~ /"(.*)"/){ #phrase search
	$term = $1;
	
	#search for whatever was in quotes exactly as is
	foreach $code (keys %inventory){
	    $title = $inventory{$code}->{title};
	    push (@returns, $code) if $title =~ /$term/i;
	}		
    } elsif ($query =~ /^(\S+) and (\S+)$/i){ #AND search
	($term1, $term2) = ($1, $2);

	#search for titles containing both terms, 
	#make sure terms are bounded by	word boundaries
	foreach $code (keys %inventory){
	    $title = $inventory{$code}->{title};
	    if (($title =~ /\b$term1\b/i) && ($title =~ /\b$term2\b/i)){
		push (@returns, $code);
	    }
	}
    } elsif ($query =~ /^(\S+) or (\S+)$/i){ #OR search
	($term1, $term2) = ($1, $2);
	
	#same as AND search, replacing && with ||
	foreach $code (keys %inventory){
	    $title = $inventory{$code}->{title};
	    if (($title =~ /\b$term1\b/i) || ($title =~ /\b$term2\b/i)){
		push (@returns, $code);
	    }
	}
    } elsif ($query =~ /^(\S+)$/){ #plain word search
	$term = $1;
	
	#search for titles containing term, bounded by word boundary
	foreach $code (keys %inventory){
	    $title = $inventory{$code}->{title};
	    push (@returns, $code) if $title =~ /\b$term\b/i;
	}
    } else { #User didn't follow correct format
	print "Sorry, that search format is not supported\n";
	return;
    }
	    
    #if anything was matched...
    if (@returns){
	print "Here are the inventory items matching your query $query:\n";
	
	#print matches in same format as display inventory function
	foreach $code (@returns){
	    $title = $inventory{$code}->{title};
	    $price = $inventory{$code}->{price};
	    print "PRODUCT: $code\n";
	    print "\t$title\n";
	    print "\t\$$price\n";
	}
    } else {
	print "Sorry, your query $query returned no items\n";
    }
}