#include<stdio.h> 
 int *add(int *a, int *b)
{
int *c ;//(int *) malloc(sizeof(int));
c = (*a)+ (*b);
printf("value at %u  id %d\n",&c,c);
return &c;
}


int main()
{
int a=10,b=20;
int *c=NULL; //add(&a,&b);
printf("\nBefore calling add()");
printf("\nvalue of c = %d", c);
printf("\naddress of c = %d",&c);
printf("\n");
c = add(&a,&b);
printf("\nAfter calling add()");
printf("\nvalue of c = %d", c);
printf("\naddress of c = %d",&c);
printf("\n");
//printf("address of c = %d ", *c);
////printf("value of sum: %d \n pointer returned by function is: %u\n",*c,&c);
}

