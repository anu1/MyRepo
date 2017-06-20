#!/usr/bin/perl
use LWP::UserAgent;


my  $ua = LWP::UserAgent->new();
#ssl_opts => { verify_hostname => 0 }
my $status_code = 0;
my $server_endpoint = "https://www.google.com";


my  $resp = $ua->get($server_endpoint);

if ($resp->is_success)
        {
        $message = $resp->decoded_content;
        print "Received reply: $message\n";
        }
else
       {
            print "HTTP GET error code: ", $resp->code, "\n";
            print "HTTP GET error message: ", $resp->message, "\n";
            die "Unable to access the URL : $server_endpoint \n";
        }
