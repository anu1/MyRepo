#include<stdio.h>
// program to calculate x^n using recursion
//
main()
{
int n,x;
printf("Enter x value:\n");
scanf("%d" , &x);
printf("Enter n value:\n");
scanf("%d" , &n);
printf("Power of the given number is:%d \n",power(x,n));
}
int power(int x,int n)
{
if (n==1) return x;
return (x*power(x,n-1));
}
