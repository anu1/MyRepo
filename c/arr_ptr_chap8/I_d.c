#include<stdio.h>
//program to pass entire array to function and modify its values
main()
{
int i,a[6]={1,2,3,4,5,6};
modify(a,6);
printf("Array with modified values: \n");
for(i=0;i<=5;i++) printf("%d ",a[i]);
printf("\n");
}
int modify(int *a,int n)
{
int i;
for(i=0;i<=n-1;i++)  *(a+i)*3;
}
