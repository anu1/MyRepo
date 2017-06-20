//copy the contents of the array in to another array in reverse order

#include<stdio.h>
main()
{
int a[5]={5,4,3,2,1},b[5],i,j;
printf(" Elements in array a : \n");
for(i=0;i<=4;i++) printf("a[%d] =  %d  \n",i,a[i]);
printf(" Elements in array b : \n");
for(i=4,j=0;i>=0;i--,j++) {
b[j]=a[i];
}
for(j=0; j<= 4; j++)
printf("\nb[%d] = %d" , j, b[j]);

printf("\n");
}
