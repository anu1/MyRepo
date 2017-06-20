#include<iostream>

#include<string>
#include<fstream>


using namespace std;
int main()
{
	
	ifstream ifile;
	char s[100], fname[20];
	cout<<"Enter file name to read and display its content (like file.txt) : ";
	cin>>fname;
	ifile.open(fname);
	if(!ifile)
	{
		cout<<"Error in opening file..!!";
	}
	while(ifile.eof()==0)
    {
        //ifile>>s;
		ifile.getline(s,100);
        cout<<s<<" ";
		cout<<"\n";
		
    }
	cout<<"\n";
	ifile.close();
	
}