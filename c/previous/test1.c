#include<stdio.h>
main()
{
int ar[26],i;
for(i=0;i<=25;i++)
{
ar[i]='A'+i;
printf("\n %d %c \n",ar[i],ar[i]);
}
}
