#include <stdio.h>
int sum(int);

main()
{
int n;
printf("enter n value:");
scanf("%d",&n);
printf("sum of intezers 1 to n is: %d  \n",sum(n));
}
int sum(int a)
{
int i, sum1=0;
for(i=1;i<=a;i++)
{
sum1=sum1+i;
}
return sum1;
}
