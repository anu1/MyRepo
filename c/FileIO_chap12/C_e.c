#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	FILE *f1, *f2;
	f1 = fopen("student.txt", "r");
	f2 = fopen("student1.txt", "w");
	while (fgets(str, 49, f1) != NULL)
	{
		strupr(str);
		fputs(str, f2);
	}
	//getch();
	return 0;
}

void strupr(char s[]) {
   int c = 0;
 
   while (s[c] != '\0') {
      if (s[c] >= 'a' && s[c] <= 'z') {
         s[c] = s[c] - 32;
      }
      c++;
   }
}
