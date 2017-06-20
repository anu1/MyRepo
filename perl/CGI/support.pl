#!C:\Perl\bin\perl.exe

use CGI;
use HTML::Template;

my $cgi = new CGI;
my $tmpl = HTML::Template->new(
    filename => "support.tmpl",
    die_on_bad_params => 0,
);

$tmpl->param( supportPage => "active" );

print $cgi->header();
print $tmpl->output();

