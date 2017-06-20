#include<stdio.h>
main()
{
int i=45,c;
c=multiply(i*1000);
printf("\n %d",c);
}
multiply(int ch )
{
if(ch>=40000) return(ch/10);
else return(10);
}
