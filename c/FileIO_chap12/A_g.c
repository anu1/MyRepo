#include<stdio.h>
main()
{
FILE *fp;
char name[20];
int i;
fp=fopen("students.c","wb");
for(i=0;i<=5;i++)
{
puts("\nEnter name:");
gets(name);
fwrite(name,sizeof(name),1,fp);
}
printf("\n");
fclose(fp);
}
