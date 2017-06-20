//print string using a pointer 
#include<stdio.h>
main()
{
char name[]="Klinsman";
char *ptr;
ptr=name;
while(*ptr != '\0');
{
printf("%c", *ptr);
ptr++;
}
}
