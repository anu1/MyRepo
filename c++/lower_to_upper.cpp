/* C++ Program - Lowercase to Uppercase Conversion */
		

#include<iostream>
#include<string>
#include<cstring>
using namespace std;
main()
{
  
  char str[] = "C++ Programming is awesome";
  int i;
   int n;
    
  cout<<"Enter the String (Enter First Name) : ";
  cin>>str;
  n=strlen(str);  
  cout<<n;
  for(i=0;i<=n;i++)
  {
	    if(str[i]>=97 && str[i]<=122)
	    {
		str[i]=str[i]-32;
	    }
  }
  cout<<"\nThe String in Uppercase = "<<str;
  
}