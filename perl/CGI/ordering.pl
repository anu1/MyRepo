#!C:\Perl\bin\perl.exe

use CGI;
use HTML::Template;

my $cgi = new CGI;
my $tmpl = HTML::Template->new(
    filename => "ordering.tmpl",
    die_on_bad_params => 0,
);

$tmpl->param( orderingPage => "active" );

print $cgi->header();
print $tmpl->output();

