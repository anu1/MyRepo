#include<stdio.h>
float *junk(float *i)
{
printf("value of i:%u\n",i);
i=i+1;
return i;
}
main()
{
float p=23.5;
float *q;
q=&p;
printf("value of q before call:%u\n",q);
q=junk(&p);
printf("value of q after call:%u\n",q);
}
