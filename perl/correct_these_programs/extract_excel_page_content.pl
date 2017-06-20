#!/usr/bin/perl
use strict;
use Spreadsheet::ParseExcel::Simple;
my %output_Hash;
my $xls = Spreadsheet::ParseExcel::Simple->read('/home/anu/perl/INPUT_FILE.xls') || die "Error opening the file\n";

foreach my $sheet ($xls->sheets) {
#my $sheet = ($xls->sheets)[2]; # Sheet 1
#my $data = ($sheet->next_row)[-1]; # last col of row 1
my $sheet_name = $sheet->{sheet}->{Name};
open (OUT ,">",$sheet_name.'.xml') or die $!;
my($emp_id,$emp_name,$emp_adress);
 while ($sheet->has_data) {  
		#print "text\n";
         my @data = $sheet->next_row; 
		 #print "@data\n";
         $emp_id = $data[0]; 
         $emp_name = $data[1] ;
         $emp_adress = $data[2];
push( @{$output_Hash{$emp_id}}, [$emp_name,$emp_adress]); 

foreach my $emp_id (sort keys %output_Hash) 
  {
  foreach my $array_ref(@{$output_Hash{$emp_id}})
	{   
		my($emp_name,$emp_adress)=@{$array_ref};
		#print OUT $emp_id,$emp_name,$emp_adress ."\n";
		#print "test\n";
	}
	
  }
}
}
