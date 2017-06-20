#include <stdio.h>
main()
{
int i=1,sum=0,m=0,n=0;
printf("enter the n value:");
scanf("%d", &n);
while(i<=n)
{
printf("enter the %d value: ",i);
scanf("%d",&m);
i++;
sum=sum+m;
}
printf("sum of n numbers is: %d \n", sum);
}
