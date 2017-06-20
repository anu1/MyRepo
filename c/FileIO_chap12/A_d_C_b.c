#include<stdio.h>
//find the size of a file without traversing character by character
main()
{
FILE *fp,*fq;
int len=0;
char str[200];
fp=fopen("myfile.txt","r");
fq=fopen("myfile1.txt","w");
while(fgets(str,200,fp)!=NULL) 
	//printf("%s",str);
	{
	fputs(str,stdout);
len=len+strlen(str);}
printf("Size of the text file is:%d\n",len);
fclose(fp);
}
