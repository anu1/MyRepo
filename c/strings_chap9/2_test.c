// a look-alike of the function strlen()
#include<stdio.h>
main()
{
char arr[]="bamboo";
int len1, len2;
len1=xstrlen(arr);
len2=xstrlen("HumptyDumpty");
printf(" string = %s \n length = %d\n", arr, len1);
printf(" string = %s \n length = %d\n", "Humpty Dumpty",len2);
}
xstrlen( char *s)
{
int length = 0;
while ( *s != '\0')
{
length++;
s++;
}
return(length);
}
