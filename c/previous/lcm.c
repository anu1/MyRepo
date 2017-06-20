#include <stdio.h>
main()
{
int a,b,i=0,small=0,lcm=1;
printf("Enter a and b :");
scanf("%d%d",&a,&b);
if(a>b) 
{
  small=b;
}
else  small=a;

i=small;

printf("\n small number is %d \n",small);

while(i>=2)
{
if((a%i == 0) && (b%i ==0)) { lcm = i; }
i--;
}
printf("\n LCM of given numbers is %d \n",lcm);
}

