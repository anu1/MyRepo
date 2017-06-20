#include <stdio.h>
/* sum of n  intezers*/

main()
{
int i=0,n,sum=0;
printf("read n value:");
scanf("%d",&n);
while(i<=n)
{
sum = sum+i;
i++;
}
printf("sum : %d \n", sum);
}


