#include <stdio.h>
main()
{
int a,b,i=1,small=0,gcd=1;
printf("Enter a and b :");
scanf("%d%d",&a,&b);
if(a>b) 
{
  small=b;
}
else  small=a;

printf("\n small number is %d \n",small);

while(i<=small)
{
if((a%i == 0) && (b%i ==0)) { gcd = i; }
i++;
}
printf("\n GCD of given numbers is %d \n",gcd);
}

