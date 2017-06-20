#include<stdio.h>
main()
{
float a=13.5;
float *b,*c;
b=&a;
c=b;
printf("\n %u \n %u \n %u \n", &a , b, c);
printf("\n %f \n %f \n %f \n %f \n %f \n", a, *(&a), *&a, *b, *c);
}
