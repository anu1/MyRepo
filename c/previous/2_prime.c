#include <stdio.h>
#include <stdlib.h>
main()
{
int n,i=1,p=0,counter=0;
printf("enter n numbers:");
scanf("%d",&n);
/*while(i<=n)
{
scanf("%d",&p);
prime(p);
i++;
}*/
for(i;i<=n;i++)
if(prime(i) == 0) counter++;
printf("\nnumber of prime numbers from 1 to %d is %d\n",n,counter);

printf("\n");
}


int prime(int a)
{
int i;
for(i=2;i<a-1;i++)
{
if(a%i==0) 
{
/*printf("given number %d is not a prime number \n",a);*/
return 1;
}
}
printf(" %d ",a);
return 0;
}

