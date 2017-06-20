#include<stdio.h>
main()
{
int i,a[5]={5,4,8,7,2},*ptr;
int small;
ptr=a;
small=*(ptr);
printf("value in small is %d \n",small);
for(i=1;i<=4;i++)
{
if(*(ptr+i) < small) small=*(ptr+i);
}
printf("Given array: \n");
for(i=0;i<=4;i++) printf("%d \n",*(ptr+i));
printf("small number:%d \n",small);
}
