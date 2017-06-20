#include<stdio.h>
main()
{
int i,rf1,rf2;
for(i=0;i<5;i++)
{
rf1=f1(i);

rf2=f2(i);
//}
printf("\n%s%5d\n\n%s%5d\n\n","f1() last returned", rf1,"f2() last returned", rf2);
}
}
f1(i)
register i ;
{
int k=0;
for(;i>0;--i)  ++k;
return(k);
}
f2(i)
register i;
{
static k;
for(;i>0;--i)  ++k;
return(k);
}
