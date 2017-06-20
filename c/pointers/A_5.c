#include<stdio.h>
main()
{
int a=5,*c;
c = &a;
a = power(&c);
printf("\na:%d c:%u *(c):%d\n",a,c,*(c));
}
power(int **ptr)
{
int b;
printf("\n**ptr:%d\n",(**ptr));
b = **ptr***ptr;
return(b);
}
