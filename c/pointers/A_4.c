#include<stdio.h>
main()
{
int c=10,d=20;
printf("Before swap,c=%d d=%d\n",c,d);
swap(&c,&d);
printf("After swap,c=%d d=%d\n",c,d);
}
swap(int *cc,int *dd)
{
printf("In Swap\n");
printf("cc:%u dd:%u\n",&cc,&dd);
exchange(&cc,&dd);
}
exchange(int *cc, int *dd)
{
printf("In Exchange\n");
printf("cc:%u dd:%u\n",(&cc),(&dd));
printf("cc:%d dd:%d\n",*(&cc),*(&dd));
int t;
t = *cc;
printf("t:%d\n",t);
*cc = *dd;
*dd = t;
}
