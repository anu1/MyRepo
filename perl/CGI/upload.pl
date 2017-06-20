#!C:/Perl/bin/perl.exe

use CGI;
use CGI::Carp 'fatalsToBrowser';
use Data::Dumper;

my $cgi = new CGI;

print "Content-type: text/html\n\n";
printf "<form method=post action='%s' enctype='multipart/form-data'>",
    $ENV{ 'SCRIPT_NAME' };
print "<input type=file name='upload-file'>";
print "<input type=submit value='Upload'>";
print "</form>";

if ( $cgi->param( 'upload-file' ) ) {
    my $upload = $cgi->upload( 'upload-file' );
    my $info = $cgi->uploadInfo( $upload );
    my $data = "";

    $data .= $_ while ( <$upload> );

    print "File upload received:<br>\n";
    print "<li>Bytes: " . length( $data ) . "<br>\n";
    print "<li>Content-Type : " . $info->{ 'Content-Type' } . "<br>\n";
    print "<li>Content-Disposition: " . $info->{ 'Content-Disposition' } . "<br>\n";
}
