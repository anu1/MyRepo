#include<stdio.h>
#include<string.h>
//program to reverse the string in a given array of pointers to strings
main()
{
char *str[]={
	   "Too err is human....",
	   "but to really mess things up...",
	   "one needs to know c!!!"};
char tstr[100];
int i; 
   for(i=0;i<3;i++) 
{
printf("%s \n", str[i]);
strcpy(tstr,str[i]);

xstrrev(tstr);
str[i]=tstr;

printf("%s \n", str[i]);
}
 
}

   xstrrev(char *str)
 {
  char temp;
  int i=0,j=0,len;
   
   len = strlen(str);
   j = len - 1;
   while(i < j)
   {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;j--;
   }
 


}
