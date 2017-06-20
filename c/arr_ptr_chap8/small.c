#include<stdio.h>
main()
{
int a[5]={32,34,65,67,40},i,small;
printf("Elements of the array are \n");
for(i=0;i<=4;i++) printf("%d \n",a[i]);
small=a[0];
for(i=1;i<=4;i++) 
{
if(a[i]<small) small=a[i];
}
printf("%d is the smallest number \n",small);
}
