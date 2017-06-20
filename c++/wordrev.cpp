// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main () {
  string s1,s2,s3;
  ifstream myfile ("Sample.dat");
  
  if (myfile.is_open())
  {
    
    while ( myfile >> s1 >> s2 >> s3)
    {
		cout << s1.c_str() << " " << s2.c_str() << " " << s3.c_str() << endl;
	}
    myfile.close();
  }
  else cout << "Unable to open file"; 

  return 0;
}
