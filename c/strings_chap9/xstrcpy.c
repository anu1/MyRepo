#include<stdio.h>
main()
{
char source[]="Soyonora";
char target[20];
xstrcpy(target,source);
printf("\n source string: %s",source);
printf("\n target string: %s \n",target);
}
xstrcpy(char *t, char *s)
{
while(*s!='\0')
{
*t=*s;
s++;
t++;
}
}
