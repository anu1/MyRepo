#include<stdio.h>
fib(n)
{
int i=0,f=0i,f1;
for(i=0;i<=n;i++)
{
f=f+i;
f1=f;
printf("%d \n", f1);
}
}
main()
{
int n;
printf("Enter n value:");
scanf("%d",&n);
fib(n);
}
