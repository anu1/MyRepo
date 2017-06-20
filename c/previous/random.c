#include<stdio.h>
main()
{
int a=5;
int *p,*q;
p=(&a);
q=p;
printf("\n p=%d \n q=%d \n value at p=%d \n value at q=%d \n",p,q,*p,*q);
//*p=10;
*q=11;
printf("\n value at p=%d \n value at q=%d \n",*p,*q);
}
