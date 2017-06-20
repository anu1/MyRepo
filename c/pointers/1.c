#include<stdio.h>
main()
{
int i=3;
int *p;
p=&i;
printf("%d \n", p);
printf("%d \n", *p + 7);
printf("%d \n",**&p);
//printf("%d \n", p - (p-2));
}
