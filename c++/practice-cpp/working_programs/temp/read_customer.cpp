// readdata.cpp
// Reading from a random access file


// This program prompts the user for the account number of the record he wishes
// to query. If the record exists , it is displayed . If the record does not
// exists than a correspoding message is displayed.
// It prompts the user for continuation and terminates when the user enters 'n'

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

#define CREDIT_FILE "credit.dat"   

using namespace std;
// Structure of the customer record

struct clientstruct {
   int acctNum;
   char lastName[15];
   char firstName[10];
   float balance;
};

// The client class structure

class clientDataClass {
  
 private :

   struct clientstruct clientData ;
   ifstream outCredit;  

 public:

   clientDataClass()   
   // constrcutor for the class 
   // opens  the file in read mode 
   { 
     outCredit.open(CREDIT_FILE, ios::in);

     if (!outCredit) {
      cerr << "File could not be opened." << endl;
      exit(1);
     } 
   }

   clientDataClass(char *filename)
   // constructor with filename as parameter
   {
     outCredit.open(filename, ios::in);

     if (!outCredit) {
      cerr << "File could not be opened." << endl;
      exit(1);
     }
   } 
   void read_data (void)  
   //function to read data from the file
   {
          int acctnum;

          cout << "Enter account number "<<endl << "?";
          cin >> acctnum;
	  outCredit.seekg((acctnum - 1) * sizeof(clientData));
          outCredit.read((char *)&clientData, sizeof(clientData));
	  if (acctnum != clientData.acctNum)
	  {
	    cout << "Record does not exists"<<endl;
          }
	  else 
	  display_data();
   }
 

 void clear_stream (void)
 // function to clear the end of file character 
  {
   outCredit.clear();
  }

 
  void display_data (void) 
  // function to display results to the screen
  {
    cout << setiosflags(ios::left) << setw(6) << clientData.acctNum
	 << setw(16) << clientData.lastName << setw(11) << clientData.firstName
         << setw(10) << setprecision(2)
	 << setiosflags(ios::showpoint | ios::right)
         << clientData.balance << endl;
  }

  
  ~clientDataClass()
  //destructor for the class 
  { 
    outCredit.close();
  }

};

main()
{
   clientDataClass client;
   char choice[2];

   choice[0] = 'y';

   do {
      client.read_data();
      client.clear_stream();
      cout << "Do you wish to View any more records (y/n) ? "<<endl;
      cout <<"?";
      cin >> choice;
      }while (choice[0] == 'y');
}
