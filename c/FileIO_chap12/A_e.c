#include<stdio.h>
main()
{
char ch;
FILE *fp;
fp=fopen("myfile.txt","r");
while((ch=getc(fp))!=EOF)
	printf("%c",ch);
fclose(fp);
}
