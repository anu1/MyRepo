#include<stdio.h>
main()
{
int i, sum=0,n=0,m=0,avg=0;
printf("enter n value:\n");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
printf("enter %d th number:",i);
scanf("%d",&m);
sum=sum+m;
}
avg=sum/n;
printf( "sum of %d numbers is: %d \n",n,sum);
printf("avg of %d numbers is: %d \n",n,avg);
}
