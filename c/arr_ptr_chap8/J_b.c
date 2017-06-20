#include<stdio.h>
main()
{
int n[3][3]={
		2,3,4,
		6,8,5,
		3,5,1 };
int i,*ptr;
ptr = n;
for(i=0;i<=8;i++) printf("\n %d \n", *(ptr+i));
}
