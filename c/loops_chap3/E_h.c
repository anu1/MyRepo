#include<stdio.h>
//print table of any given number n

main() 
{
int i,n,j;
printf("Enter n value:");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
j=n*i;
printf("%d * %d = %d \n",n,i,j);
}
}

