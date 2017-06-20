
#include<iostream>
using namespace std;

void pass_by_reference(int *);
int main()
{
    int number;

    cout<<"Enter Number to Calculate Square: ";cin>>number;
    cout<<"\n\n\n";

    pass_by_reference(&number);
    cout<<"\t\tResult: "<<number<<endl;

    return 0;

}

void pass_by_reference(int *iPtr)
{
    *iPtr=*iPtr * *iPtr;
}

