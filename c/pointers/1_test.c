#include<stdio.h>
#include<stdlib.h>
int *check(int i, int j)
{
int *p, *q;
p=&i;
q=&j;
if(i>=45) return (p);
else return (q);
}

int *Add(int *a,int *b)
{
int *c = (int *) malloc(sizeof(int));
*c=(*a) + (*b);
return c;
}

int main()
{
int a=10,b=20;
int *ptr = Add(&a,&b);
int *ptr2 = check(10,20);
printf("Sum:%d\n",*ptr);
printf("c:%u\n",ptr2);
}
