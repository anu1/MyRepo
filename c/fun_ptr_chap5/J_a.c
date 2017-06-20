//find the sum of n numbers using functions
#include<stdio.h>
int sum(int,int);
int main(void)
{
int i,n;
int tsum=0; // temp sum var
for(i=1;i<=5;i++)
{
printf("Enter %dth number:",i);
scanf("%d",&n);
tsum = sum(tsum,n);
}

printf("sum of 5 numbers:%d\n",tsum);
}


int sum(int old, int new)
{
return (old+new);
}
