#include<stdio.h>
//program to find sum of n natural numbers
main()
{
int n;
printf("Enter n value:");
scanf("%d",&n);
printf("Enter sum of n numbers:%d \n",sum(n));
return 0;
}
int sum(int n)
{
//int s=0;
if(n==1) return 1;
return (n+sum(n-1));
}

