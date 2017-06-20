#include<stdio.h>
main()
{
struct gospel
{
int num;
char mess1[50];
char mess2[50];
}m;
m.num=1;
strcpy(m.mess1,"if all that you have is a summer");
strcpy(m.mess2,"everything looks like a nail");
printf("\n %u \n %u \n %u \n", &m.num,m.mess1,m.mess2);
}
