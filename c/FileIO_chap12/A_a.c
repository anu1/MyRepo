#include<stdio.h>
main()
{
FILE *fp;
char ch;
openfile("myfile.txt",&fp);
if(fp==NULL) printf("Unable to open a file");
while(1)
	{
	ch=fgetc(fp);
	if(ch==EOF) break;
	printf("%c",ch);
}
fclose(fp);
}
openfile(char *fn, FILE **f)
{
*f = fopen(fn,"r");
}
