#include<stdio.h>
prn_char(c,n)
{
int i;
for(i=1;i<=n;i++)
printf ( "%d \n", c);
}
main ()
{
char c='a';int n;
printf("enter  n  value:");
scanf("%d",&n);
prn_char(c,n);
}
