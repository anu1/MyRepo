#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TRUE 1
#define FALSE 0
 
int check_vowel(char);
 
main()
{
   char string[100], *temp, *ptr, ch, *start;
 
   printf("Enter a string\n");
   gets(string);
 
   temp = string;
   ptr = (char*)malloc(100);
 
  if( ptr == NULL )
   {
      printf("Unable to allocate memory.\n");
      exit(EXIT_FAILURE);
   }
 
   start = ptr;
 
   while(*temp)
   {
      ch = *temp;
 
      if ( !check_vowel(ch) )
      {
         *ptr = ch;
         ptr++;
      }
      temp++;
   }
   *ptr = '\0';
 
   ptr = start;
   strcpy(string, ptr); /* If you wish to convert original string */
   free(ptr);
 
   printf("String after removing vowel is \"%s\"\n", string);
 
   return 0;
}
 
int check_vowel(char a)
{
   if ( a >= 'A' && a <= 'Z' )
      a = a + 'a' - 'A';
 
   if ( a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
      return TRUE;
 
   return FALSE;
}
