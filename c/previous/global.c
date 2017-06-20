#include<stdio.h>
int z;
f(x)
int x;
{
x=2;
z+=x;
}
main()
{
z=5;
f(z);
printf("z=%d\n",z);
}
