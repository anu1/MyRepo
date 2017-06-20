#include<stdio.h>
#include<string.h>
main()
{
struct employee
{
char name[25];
int age;
float bs;
};
struct employee e;
strcpy(e.name,"Hacker");
e.age=25;
printf("\n %s \n %d \n", e.name ,e.age);
}
