#include<stdio.h>
main()
{
int i,n;
double m=0.0;
int fact=1;
printf("Enter n value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact = fact*i;
m=m+(i/fact);
printf("fact of given number is: %d \n",fact);
printf("Value of series until the given number is : %1f \n",m);
}
}

