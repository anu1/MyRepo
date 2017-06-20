#include<stdio.h>
main()
{
int a=10;
int *j;
void *k;
j=k=&a;
printf("\n %u %u \n",j,k);
j++;
k++;
printf("\n %u %u \n",j,k);
}

