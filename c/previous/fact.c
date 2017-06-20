#include<stdio.h>
main()
{
int i=1,f=1,n,n1;
printf("read n:");
scanf("%d",&n);
n1=n;
while(i<=n)
{
f=f*n1;
i++;
n1=n1-1;
}
printf("factorial is %d\n",f);
}

