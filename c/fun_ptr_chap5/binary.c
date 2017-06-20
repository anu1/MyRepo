#include<stdio.h>
//recursive program to convert decimal to binary 
int bin(int);
main()
{
int n;
printf("Enter a decimal number:");
scanf("%d",&n);
bin(n);
printf("\n");
//printf("Binary of the given decimal digit is: %d \n",bin(n));
}
int bin(int n)
{
int a;
if(n==1)  { a=1; printf("%d",a); return 0;}
if(n%2 == 0)  a=0;
else a=1;
bin(n/2);
printf("%d",a);
}





