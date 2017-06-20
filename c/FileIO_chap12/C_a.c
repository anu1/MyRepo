#include<stdio.h>
main()
{
FILE *fp;
char ch;
int i=1;
fp=fopen("myfile.txt","r");
printf("%d  ",i++);
while(1)
{
ch=fgetc(fp);
if(ch==EOF) break;
printf("%c",ch);
if(ch=='\n')
{
printf("%d  ",i);
i++;
}
}
fclose(fp);
printf("\n");
}
