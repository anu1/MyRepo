#include<stdio.h>

#include<stdlib.h>
int main()
{
	FILE *f1, *f2;
	char ch, buffer[10];

	/*Destination File*/
	f1 = fopen("file1.txt", "a+");
	if (f1 == NULL)
	{
		printf("File do not exist or can't be open");
		exit(1);
	}

	/*Source File*/
	f2 = fopen("file2.txt", "r+");
	if (f2 == NULL)
	{
		printf("File do not exist or can't be open");
		exit(2);
	}

	fseek(f1, 0, SEEK_END);
	/*Goes to last character*/

	ch = fgetc(f2);

	while (ch != EOF)
	{
		fputc(ch, f1);
		ch = fgetc(f2);
	}

	rewind(f1);
	while (fgets(buffer, 9, f1) != NULL)/*Displaying the content*/
		printf("%s", buffer);

	fclose(f1);
	fclose(f2);
	return 0;
}
