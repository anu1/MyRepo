#include<stdio.h>
main()
{
int a=1;
int b=2,c=3;
++a;
c += ++b;
printf("\n first:%5d%5d%5d \n",a,b,c);
{
float b=2.0;
int c;
c=b*3;
a += c;
printf(" \n second: %5d%5.1f%5d",a,b,c);
}
printf("\n third:%5d%5d%5d\n\n",a,b,c);
}

