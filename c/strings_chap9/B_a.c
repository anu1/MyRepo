#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
char *str1="unified";
char *str2="front";
char *ptr,*str3;
ptr=(char*) malloc((strlen(str1)+strlen(str2)+1) * sizeof(char));
str3=strcat(strcpy(ptr,str1),str2);
printf("%s \n",str3);
}
