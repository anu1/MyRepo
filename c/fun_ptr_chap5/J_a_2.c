#include<stdio.h>
//find the sum of the digits of a given number using recursion

#include<stdio.h>
main()
{
int n;
printf("Enter a value:");
scanf("%d",&n);
printf("%d \n",add_digits(n));
return 0;
}
int add_digits(int n)
{
//int sum=0;
if(n==0) return 0;
return (n%10 + add_digits(n/10));
//return sum;
}

