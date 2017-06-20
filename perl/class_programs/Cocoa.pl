#!/usr/bin/perl
 
 use Cocoa;
 $cup = new Cocoa;
 
 $cup->setImports( 'java.io.InputStream', 'java.net.*');
 $cup->declareMain( "Msg" , "java.applet.Applet", "Runnable");
 $cup->closeMain();
