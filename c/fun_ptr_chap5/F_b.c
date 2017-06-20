#include<stdio.h>
//program to find sum avg and deviation of five integers
int sum_int(int, int);
int sum_int_ptr 
main()
{
int sum;
sum = sum_int(5,0);
printf("Sum of five given integers is :%d \n",sum);
}

int sum_int(int n,int j)
{
int i, sum=0;
for(i=1;i<=n;i++)
{
printf("Enter %dth number:",i);
scanf("%d",&j);
printf("%d \n",j);
sum=sum+j;
}
return sum;
}
