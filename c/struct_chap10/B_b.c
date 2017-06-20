#include<stdio.h>
main()
{
struct employee
{
char name[25];
char language[10];
};
struct employee e={"Hacker","c"};
printf("\n %s \n %s \n",e.name,e.language);
}
