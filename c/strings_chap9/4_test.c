//another example of strcpy function
#include<stdio.h>
main()
{
char source[]="sony";
char target[20];
xstrcpy(target,source);

printf(" source string : %s \n",source);
printf(" target string : %s \n",target);
}
xstrcpy( char *t, char *s)
{
while( *s != '\0' )
{
*t = *s;
s++;
t++;
}
*t='\0';
}
