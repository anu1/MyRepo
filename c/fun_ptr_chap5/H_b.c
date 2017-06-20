#include<stdio.h>
main()
{
int p=23, f=24;
fun(&p,&f);
printf("\n %d \n %d \n",p,f);
}
fun( int *q, int g )
{
*q=*q+*q;
g=g+g;
}
