#include<stdio.h>
main()
{
char s[]="No two viruses work similarly";
int i=0;
while(s[i]!=0)
	{
	printf("%c",s[i]);
	//printf("%c \n",*(s+i));
	//printf("%c \n",i[s]);
	//printf("%c \n",*(i+s));
	i++;
	}
printf("\n");
}
