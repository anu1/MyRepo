#include<stdio.h>
main()
{
float a[]={13.24,1.5,1.5,5.4,3.4};
float *j,*k;
j=a;
k=a+4;
//j=j*2;
//k=k/2;
printf("\n%f\n%f\n",*j,*k);
}
