#!/usr/bin/perl

package A;

{

print "My name is Anu.\n";

}
package B;
{
@ISA = A;
print "This is my house.\n";
}
