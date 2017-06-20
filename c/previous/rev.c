#include<stdio.h>
main()
{
int t,n,arm=0,rev=0,temp=0;
printf("enter n value:");
scanf("%d",&n);
t=n;
while(n>0)
{
temp=n%10;
arm= arm+(temp*temp*temp);
rev=(rev*10)+temp;
n=n/10;
}
printf("Reverse of the given number is:%d \n",rev);
if(t==arm) printf(" given number %d is also an armstrong number\n",t);
}
