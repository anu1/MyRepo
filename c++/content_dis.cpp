#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
  ifstream in("test_len.cpp");

  if(!in) {
    cout << "Cannot open input file.\n";
    return 1;
  }

  char str[255];

  while(in) {
    in.getline(str, 255);  // delim defaults to '\n'
    if(in) cout << str << endl;
  }

  in.close();

  return 0;
}