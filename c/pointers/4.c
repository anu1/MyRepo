#include<stdio.h>
main()
{
int b[]={10,20,30,40,50};
int i,*k;
k=&b[4]-4;
printf("Value at &b[4]:%u\n",&b[4]);
printf("Value at k:%u\n",k);
for(i=0;i<=4;i++)
{
printf("%u  %d\n",&b[i],*k);
k++;
}
}
