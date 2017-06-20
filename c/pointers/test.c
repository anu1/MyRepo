#include<stdio.h>
#include<stdlib.h>
int *add(int *a, int *b)
{
int *ptr = (int *) malloc(sizeof(int));
*ptr = (*a)+ (*b); //storing value in to c
printf("value at *a:%d\n",*a);
printf("value at *b:%d\n",*b);
printf("what is in ptr:%d\n",ptr);
//printf("value at %u  id %d\n",c,*c);
printf("In function Add()\n");
printf("value at *ptr:%d\n",*ptr);
printf("value at &ptr:%u\n",&ptr);
printf("value at *(*(&ptr)):%d\n",*(*(&ptr)));
printf("\n\n");
return ptr;
}


int main()
{
int a=10,b=20;
int *c;
c=add(&a,&b);
printf("In function main()\n");
printf("value at *c:%d\n",*c);
printf("value at &c:%u\n",&c);
printf("value at *(&c):%d\n",*(&c));
printf("value at *(*(&c)):%d\n",*(*(&c)));
}
