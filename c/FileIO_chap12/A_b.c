#include<stdio.h>
#include<stdlib.h>
main()
{
FILE *fp;
char c;
fp=fopen("myfile.txt","r");
while((c=getc(fp))!=EOF)
printf("%c",c);
fclose(fp);
}
