// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//void reverse_array( string word[], int i )
//{
 //   for (int j = 0; j < (i / 2); j++) {
  //          string temp = word[j];                 // temporary wasn't declared
//	    word[i] = word[(i - 1) - j];
 //           word[(i - 1) - j] = temp;
  // }
//}




int main () {
  string line;
  int i,cnt;
  string word[100];
  ifstream myfile ("Sample.dat");
  
  i=0;
  if (myfile.is_open())
  {
    
    while ( getline (myfile,line,' ') )
    {
      word[i]=line;
      cout << word[i]<< '\n';
      i++;
      
    }
    myfile.close();
  }
  else cout << "Unable to open file"; 
  //cout<<i<<endl;
  //cout<<cnt<<endl;
  //reverse_array( word, i );
  for(int k=i-1;k>=0;k--) 
	  cout<<word[k]<< " ";
  cout<<endl;
  //delete[] word;
  return 0;
}
