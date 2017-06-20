#include<iostream>

#include<string>


using namespace std;

int stringlength (char* mystring);

int main()
{
    char *mystring;


    cout<<"enter the string \n";
    cin>>mystring;

    cout<<"length is "<<stringlength(mystring);

    
}

int stringlength(char* mystring){
    int i = 0;
    for(; mystring[i] != '\0'; i++);
    return i;
} 