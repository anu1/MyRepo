#include<stdio.h>
#include<string.h>
struct gospel
{
int num;
char mess1[50];
char mess2[50];
}m1={2, "if you are driven by success",
	"make sure that it is a quality drive"
     };
main()
{
struct gospel m2,m3;
m2=m1;
m3=m2;
printf("\n %d \n %s \n %s \n",m1.num,m2.mess1,m3.mess2);
}
