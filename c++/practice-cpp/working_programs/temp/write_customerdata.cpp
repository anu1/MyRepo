// writedata.cpp
// Writing to a random access file
// This function takes the customer information from the user and writes the
// same in the file.
// The program terminates when the user presses 'n'
#include <iostream>
#include <fstream>
#include<cstdlib>
#define CREDIT_FILE "credit.dat"
using namespace std;
//structure of customer record
struct clientstruct {
int acctNum;
char lastName[15];
char firstName[10];
float balance;
};
//structure of client class
class clientDataClass {
private :
struct clientstruct clientData ;
ofstream inCredit;
public:
clientDataClass()
// constructor for the class
// opens the file in the write mode
{
inCredit.open(CREDIT_FILE, ios::out);
if (!inCredit) {
cerr << "File could not be opened." << endl;
exit(0);
}
}

clientDataClass(char *filename)
// constructor for the class with filename provided by user
// opens the file in the write mode
{
inCredit.open(filename, ios::out);
if (!inCredit) {
cerr << "File could not be opened." << endl;
exit(0);
}
}
~clientDataClass()
//destructor, close the output stream
{
inCredit.close();
}
void input_data (void)
// function to read the input data from the user
{
cout << "Enter account number "
<< "(1 to 100)" << endl << "? ";
cin >> clientData.acctNum;
cout << "Enter lastname, firstname, balance" << endl <<"?";
cin >> clientData.lastName >> clientData.firstName
>> clientData.balance;
}
void write_file(void)
// function to write data taken from the user into the file
{
inCredit.seekp((clientData.acctNum - 1) * sizeof(clientData));
inCredit.write((char *)&clientData, sizeof(clientData));
}
};

main()
// main function, exits when user enters ‘n’
{
clientDataClass client;
char choice[2];
choice[0] = 'n';
do {
client.input_data();
client.write_file();
cout << "Do you wish to Add any more records (y/n) ? "<<endl;
cout <<"?";
cin >> choice;
}while (choice[0] == 'y');
}

