#include<stdio.h>
//find the output of the following program
main()
{
int array[26], i;
for(i=0;i<=25;i++)
{
array[i] = 'A'+i;
printf("%d %c \n", array[i], array[i]);
}
}
