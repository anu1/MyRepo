//program to fin sum, average and deviation of five positive integers
#include<stdio.h>
#include<math.h>

void function(int , int , int , int , int , int  *, float  *, float *);
main( )
{
 float avg, dev;
 int i,j,k,l,m, sum;
 printf("\n Enter five positive integers: ");
 scanf("%d%d%d%d%d", &i, &j, &k, &l, &m);
 function(i, j, k, l, m, &sum, &avg, &dev);
 printf("\nThe sum is:%d\n The average is:%f\n The standard deviation is:%f\n", sum, avg, dev);
 return 0;
}

void function(int i,int j,int k,int l,int m,int *sum,float *avg, float *dev)
{
 *sum = i+j+k+l+m;
 *avg = *sum / 5;
 *dev = sqrt((((i - *avg)*(i - *avg)) + ((j - *avg)*(j - *avg)) + ((k - *avg)*(k - *avg))) / 5.0);
}

