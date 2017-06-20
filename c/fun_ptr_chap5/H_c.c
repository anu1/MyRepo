#include<stdio.h>
int check(int m);
main()
{
int k=35,z;
z=check(k);
printf("\n %d \n",z);
}
int check(int m)
{

if(m>40) return(1);
else return(0);
}
