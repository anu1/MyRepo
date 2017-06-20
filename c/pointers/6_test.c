#include<stdio.h>
main()
{
int a[5][2]=
	{
	  {1,2},
	  {3,4},
	  {5,6},
	  {7,8},
	  {9,10}
	};
int i,j;
for(i=0;i<=4;i++)

printf("\nAddress of %d th 1-D array:%u\n",i,a[i]);
}
