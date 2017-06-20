#include<stdio.h>
#include<string.h>
//search a substring and replace it
main()
{
char *str[]={
		"We will teach you how to...",
		"Move a mountin",
		"Level a building",
		"Erase the past",
		"Make a million",
		"all through C!"
	    };
char substr[20], replace[20], *rep, *ptr, *full, *sub;
int i=0;
int size = sizeof(str)/sizeof(str[0]) ;
int j;


printf("\nArray of Strings is :");
for (j=0; j < size; j++)
{
 printf("\nstr[%d] = %s ", j+1,str[j]);
}


printf("\nEnter a substring to search: ");
scanf("%s",substr);
sub=substr;
printf("\nEntered substring is: %s \n",sub);
printf("\nEnter a string to replace: ");
scanf("%s",replace);
rep=replace;
printf("Entered replace string is: %s \n",rep);
printf("Size of str:%d \n",size);
for(i=0;i<size;i++) 
{
full=str[i];
if(ptr = strstr(full,sub)) 
{
printf("String %s found in the main-string : %s \n",sub,full);
printf("OK\n");
}
}
}

