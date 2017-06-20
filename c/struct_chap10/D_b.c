#include<stdio.h>
//program to play with structures of bank customers

//structure declaration
struct bank
{
int acctno;
char name[100];
int bal;
}c[200];

//main program
main()
{
int i,n,min_bal;
int code,withdrawal_amount,account_number;
printf("\nEnter the value of records to be inserted:");
scanf("%d",&n);
//Enter customer data
for(i=0;i<n;i++)
{
printf("\nenter customer accountnumber, name and balance details \n");
scanf("%d %s %d",&c[i].acctno,&c[i].name,&c[i].bal);
}
printf("\nEnter the minimum balance need to maintained by customer:"); 
scanf("%d",&min_bal);

printf("\nRead code from user:");
scanf("%d", &code);

//displaying customer names with less than min_bal
for(i=0;i<n;i++)
{
if(c[i].bal<min_bal)
{
printf("\nList of customer who are not maintaining min bal\n");
display(c[i].acctno,c[i].name,c[i].bal);
}
}


//display balance not sufficient message
switch(code)
{
case 0 : 
	 printf("\nEnter the Account number for withdrawal:");
	 scanf("%d",&account_number); 
	 for(i=0;i<n;i++) 
	 {
	 if(account_number==c[i].acctno)
	 {	 
	 printf("\nEnter amount to withdrawal:");
	 scanf("%d",&withdrawal_amount);
         if(c[i].bal<withdrawal_amount) printf("The balance is insufficient for the specified withdrawal \n");
	 else 
	     {
	      c[i].bal=c[i].bal-withdrawal_amount;
	      printf("Current balance in the account is: %d \n",c[i].bal);
	     }
	  }
	 else printf("Account number not found \n"); 
	  }
         break;
case 1 :
         printf("Deposit code not yet written!!!\n" );
         break;
default :
         printf("Invalid code\n" );
}

}  //End of main


display(int acctno,char *name,int bal)
{
printf("\n %d  %s  %d \n",acctno,name,bal);
}

