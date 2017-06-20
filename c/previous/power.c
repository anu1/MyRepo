#include<stdio.h>
int power(double x,int n)
{
int pow,i;
pow=x;
for(i=1;i<n;i++)
{
pow=pow*x;
}
return pow;
}
main()
{
 int x,n;
 printf("Enter x and n  values :");
scanf("%d %d", &x, &n );
printf("nth power of X is %d \n", power(x,n)); 
}

