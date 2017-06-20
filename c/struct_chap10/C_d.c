#include<stdio.h>
main()
{
struct time
{
int hours;
int minutes;
int seconds;
}t;
t.seconds=40;
struct time *tt;
tt=&t;
printf("%d \n",tt->seconds);
}
