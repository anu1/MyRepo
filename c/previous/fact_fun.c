#include<stdio.h>
main()
{
int n;
printf("enter a number:");
scanf("%d", &n);
fact(n);
}
fact(int n)
{
int i,n1,f=1;
n1=n;
for(i=1;i<=n;i++)
{
f=f*n1;
n1=n1-1;
}
return f;
}
