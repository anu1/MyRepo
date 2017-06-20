#include<stdio.h>
main()
{
int i=3,j=4,k,l;
k=addmult(i,j);
l=addmult(i,j);
printf("\n %d\n%d \n", k,l);
}
addmult(int ii, int jj)
{
int kk,ll;
kk=ii+jj;
ll=ii*jj;
return(kk,ll);
}

