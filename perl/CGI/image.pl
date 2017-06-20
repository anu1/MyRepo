#!C:/Perl/bin/perl.exe

use Image::Magick;

my $image = new Image::Magick;

my $err = $image->Read( "myimage.jpg" );
die $err if $err;

$err = $image->Resize( width => 400, height => 320 );
die $err if $err;

$err = $image->Crop( x => 10, y => 50, width => 200, height => 200 );
die $err if $err;

$err = $image->AdaptiveBlur( sigma => 2 );
die $err if $err;

$err = $image->Write( "myimage_edit.jpg" );
die $err if $err;

