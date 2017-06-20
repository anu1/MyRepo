#include<stdio.h>
//find output
main()
{
int a[5], i, b=16;
for(i=0;i<5;i++) a[i]=2*i;
f(a,b);
for(i=0;i<5;i++) printf("%d \n",a[i]);
printf("%d \n", b);
}
f(int *x, int y)
{
int i;
for(i=0;i<5;i++)  *(x+i)+=2;
y+=2;
}
