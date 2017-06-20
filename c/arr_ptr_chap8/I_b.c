//program to check if a[0]=a[n-1], a[1]=a[n-2]
#include<stdio.h>
main()
{
int i=0,a[10]={23,12,45,76,12,12,67,45,21,23};
//printf("\n Elements in the given array a are");
//for(i;i<=9;i++)  printf("\n%d",a[i]);

for(i;i<=9;i++) 
{	
	int n=9-i;
	if(a[i] == a[n]) printf("\n a[%d] and a[%d] has same  value %d",i,n,a[i]);
}
printf("\n");
}
