#include <string.h>
#include <stdio.h> 
int check_vowel(char);
 
int main()
{
  char s[100], t[100];
  int i, j = 0;
 
  printf("Enter a string to delete vowels\n");
  gets(s);
 
  for(i = 0; s[i] != '\0'; i++) {
   if( (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E'||  s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U') == 0) {       //not a vowel
      t[j] = s[i];
      j++;
    }
  }
 
  t[j] = '\0';
 
  //strcpy(s, t);   
 
  printf("String after deleting vowels: %s\n", s);
  printf("String after deleting vowels: %s\n", t);
 
  return 0;
}
 
 
