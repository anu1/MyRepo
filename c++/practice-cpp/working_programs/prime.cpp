#include<iostream>
using namespace std;
        main()
        {
         //clrscr();
         int number,count=0;
cout<<"ENTER NUMBER TO CHECK IT IS PRIME OR NOT ";
          cin>>number;
           for(int a=1;a<=number;a++)
               {
                if(number%a==0)
                   {
                  count++;
                   }
               }
       if(count==2)
         {
          cout<<" PRIME NUMBER \n";
         }
       else
         {
          cout<<" NOT A PRIME NUMBER \n";
         }
       //getch();
       }
