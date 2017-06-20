#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string testline;
    string word[16];

    ifstream Test ( "Sample.dat" );

    if (!Test)
    {
        cout << "There was a problem opening the file. Press any key to close.\n";
        return 0;
    }

    int i=0,j,k;
    //store words in array while outputting, skipping blank lines
    while( Test.good() )
    {
        getline ( Test, testline,' ');
        if (testline!="")
       
		{
			
            word[i]=testline;
         
 		   cout << word[i]<<endl;
            i++;
        }
		
    }

    //output whole array with spaces between each word
    cout<<"\nArray contents:\n";
    for (k=0;k<i;k++)
        cout<<word[k]<<" ";
		cout<<endl;
    return 0;
}
