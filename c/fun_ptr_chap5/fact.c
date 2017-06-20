#include<stdio.h>
main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
printf("Factorial of the given number is :%d \n",fact(n));
}
int fact(int n)
{
if (n==1) return 1;
return n*fact(n-1);
}

