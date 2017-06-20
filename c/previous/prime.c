#include <stdio.h>
#include <stdlib.h>
main()
{
int n,i;
printf("enter a number:");
scanf("%d",&n);
for(i=2;i<n-1;i++)
{
if(n%i==0) 
{
printf("given number is not a prime number \n");
exit(0);
}
}
printf("given number is a prime number \n");
}

