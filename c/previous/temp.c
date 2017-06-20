#include<stdio.h>
main()
{
int i,n=0,a=0,temp=0;
printf("enter n value:\n");
scanf("%d", &n);
printf("enter a value:");
scanf("%d",&a);
temp=a;
for(i=2;i<=n;i++)
{
printf("enter %d th number:",i);
scanf("%d",&a);
if(temp<a) temp=a;
}
printf("biggest number is: %d\n",temp );
}
