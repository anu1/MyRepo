#include<stdio.h>
//write a funtion to find the product of a float and int
float product(float, int);
main()
{
float f=1.5;
int i=2;
printf("product of two numbers:%f \n", product(f,i));
}

float product(float f,int i)
{
float c;
c=f*i;
return c;
}
