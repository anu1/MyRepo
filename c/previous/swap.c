#include<stdio.h>
main()
{ 
int a,b,t=0;
printf("enter a and b values:");
scanf("%d%d", &a,&b);
t=a;
a=b;
b=t;
printf("swapped numbers are: %d %d \n", a,b);
}
