#include<stdio.h>
//find the output
main()
{
int a[5]={5,1,15,20,25};
int i,j,k=1,m;
i=++a[1];
j=a[1]++;
m=a[i++];
printf("%d \n",++a[1]);
printf("i:%d \n",i);
printf("j:%d \n",j);
printf("m:%d \n",m);
}
