#include<stdio.h>
f(x,a,b,c)
{
int poly;
poly=(((a*x)+b)*x)+c;
return poly;
}
main()
{
int x,a,b,c;
printf("Enter x,a,b and c values:");
scanf("%d %d %d %d",&x,&a,&b,&c);
printf("value of the polynomial is %d\n ",f(x,a,b,c));
}

