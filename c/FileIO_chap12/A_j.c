#include"stdio.h"
main()
{
int fp;
fp=open("students.c","r");
if(fp==-1) puts("Cannot open file");
else
puts("file found"); 
close(fp);
}

