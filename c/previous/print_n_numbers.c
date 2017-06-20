#include <stdio.h>
/* sum of n  intezers*/

main()
{
int i=1,n,sum=0;
printf("read n value:");
scanf("%d",&n);
while(i<=n)
{
printf(" %d ", i );
sum = sum+i;
i++;
}
printf("\n sum : %d \n", sum);
}


