#include<stdio.h>
//program to sort array elements using selection sort

main()
{
int a[5]={20,12,10,15,2};
int i,j,temp;

for(i=0;i<=4;i++)
{
for(j=i+1;j<=4;j++)
{
if(a[i]>a[j]) 
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<=4;i++) printf("\n %d  \n",a[i]);
}
