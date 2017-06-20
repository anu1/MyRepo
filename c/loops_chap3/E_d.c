#include<stdio.h>
//program to generate all combinations of 1,2 and 3 using for loop
main()
{
int i,j;
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
printf("Possible combinations are: %d %d \n",i,j);
}
}
