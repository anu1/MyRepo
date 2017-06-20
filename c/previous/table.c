#include<stdio.h>
main()
{
int i,j,k=0,n=1;
printf("enter n value:");
scanf("%d",&n);
for(i=n;i<=n;i++)
{

for(j=1;j<=10;j++)
{
k=i*j;
printf("%d * %d = %d \n",i,j,k);
}
}
}
