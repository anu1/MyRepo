#include<stdio.h>
main()
{
FILE *fp;
char name[125];
int age;
fp=fopen("myfile.txt","r");
while(fscanf(fp,"%s",name)!=EOF) 
{
printf("%s",name);
}
printf("\n");
fclose(fp);
}
