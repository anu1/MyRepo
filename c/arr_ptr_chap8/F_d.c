#include<stdio.h>
//find errors
main()
{
float a[]={13.24,1.5,1.5,5.4,3.5};
float *j;
j=a;
j=j+4;
printf("%u\n%f\n%f\n",j,*j,a[4]);
}
