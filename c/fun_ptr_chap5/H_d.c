#include<stdio.h>
int function(int*);
main()
{
int i=35, *z;
z=function(&i);
printf("\n %d %d \n",&i,z);
}
int function( int *m)
{
return(m+2);
}
