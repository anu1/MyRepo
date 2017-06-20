#include <stdio.h>
main()
{
int i=0,sum=0,n;
printf("read n value:");
scanf("%d" ,&n);
while(i<=n)
{
if(i%2 == 0)
{
sum=sum+i;
}
i++;
}
printf("\n sum of even numbers till %d is: %d", n,sum );
printf("\n");
}
