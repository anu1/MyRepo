#include<stdio.h>
//program to print charachters from A-->G
main()
{
int i,j;
for(i=1;i<=7;i++)
{
for(j=0;j<=7-i;j++) printf("%c",j+65);
printf("\n");
}
}
