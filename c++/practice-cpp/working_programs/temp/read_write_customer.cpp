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
   fstream ioCredit;

 public:

   clientDataClass()
   // constrcutor for the class
   // opens  the file in read and write mode 
   {
     ioCredit.open(CREDIT_FILE, ios::in | ios::out);

     if (!ioCredit) {
      cerr << "File could not be opened." << endl;
      exit(1);
     }
   }

   int read_data ()
   //function to read data from the file
   {
          int acctnum;

          cout << "Enter account number "<<endl << "?";
          cin >> acctnum;
          ioCredit.seekg((acctnum - 1) * sizeof(clientData));
          ioCredit.read((char *)&clientData, sizeof(clientData));
          if (acctnum != clientData.acctNum)
          {
            cout << "Record does not exists"<<endl;
            return (0); 
          }
          else {
                return(1);
          }
 
   }
 

  void clear_stream (void)
  // function to clear the end of file character
  {
   ioCredit.clear();
  }

  void modify_data(void)
  // function to modify the record
  {
    char choice[2] ;

    choice[0] = 'n';

    cout << "ACCT NUMBER : " <<  clientData.acctNum << endl;
    cout << "LAST NAME   : " <<  clientData.lastName << endl;
    cout << "Do you wish to modify last name (y/n) ? "; 
    cin >> choice ;    
    if (choice[0] == 'y') {
        cout << "Enter the last name "<< endl ;
        cin  >>  clientData.lastName;
    }
    cout << "FIRST NAME  : " <<  clientData.firstName << endl;
    cout << "Do you wish to modify first name (y/n) ? "; 
    cin >> choice ;    
    if (choice[0] == 'y') {
        cout << "Enter the first name "<< endl ;    
        cin  >>  clientData.firstName;
    }
    cout << "BALANCE    : " << setprecision(2)
         << setiosflags(ios::showpoint | ios::right)
         << clientData.balance << endl; 
    cout << "Do you wish to modify balance (y/n) ? "; 
    cin >> choice ;    
    if (choice[0] == 'y') {
        cout << "Enter the balance "<< endl ;
        cin  >>  clientData.balance;
    }
    display_data();
    cout << "Update record (y/n)" << endl;
    cin  >> choice ; 
    if (choice[0] == 'y' ) {
        write_data(); 
    } 
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


   void write_data(void)
   // function to write data taken from the user into the file
   {
          ioCredit.seekp((clientData.acctNum - 1) * sizeof(clientData));
          ioCredit.write((char *)&clientData, sizeof(clientData));
          ioCredit.flush();
   }


  ~clientDataClass()
  //destructor for the class
  {
    ioCredit.close();
  }

};

main()
{
   clientDataClass client;
   char choice[2];
   int flag = 0;
   choice[0] = 'y';

   do {
       flag = client.read_data();
       if ( flag ) {
           client.modify_data(); 
       }        
      client.clear_stream(); 
      cout << "Do you wish to modify any more records (y/n) ? "<<endl;
      cout <<"?";
      cin >> choice;
      }while (choice[0] != 'n');
}

