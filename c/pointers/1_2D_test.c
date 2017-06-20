#include<stdio.h>
main()
{
int a[3][2]={	
	     {1,2},
	     {3,4},{5,6}};
int i,j;
printf("Inside for loop\n");
for(i=0;i<3;i++)
{
printf("%u \n",a+i);
for(j=0;j<2;j++)
//printf("Value at %u is %d\n",&a[i][j],a[i][j]);
}
printf("Outside for loop\n");
printf("%u \n",a);
printf("%u \n",a+1);
printf("%u \n",a+2);
}
