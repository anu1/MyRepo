#include<stdio.h>
factor(x)
{
int i;
for(i=1;i<=x;i++)
{
if(x%i==0) printf(" %d is a factor of %d \n",i,x);
}
}
main()
{
int x;
printf("Enter x value:");
scanf("%d",&x);
factor(x);
}
