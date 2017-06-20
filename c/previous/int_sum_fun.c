#include <stdio.h>
/*int sum(int);*/

main()
{
int n,i;
printf("enter n value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("sum of intezers 1 to %d is: %d  \n",i,sum(i));
}
}
int sum(int n)
{
int i, sum1=0;
for(i=1;i<=n;i++)
{
sum1=sum1+i;
}
return sum1;
}
