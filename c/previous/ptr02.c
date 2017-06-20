#include<stdio.h>
// pointer ex2 program

int main(void)
{
 int a;
 printf("\n address of a = %ld" , &a);
 printf("\n value of a (before initializatio) : %ld", a);
 a=123;
 printf("\n value of a (after initialization) : %ld \n", a);
 printf("\n value of a (after initialization)-2 : %ld \n", *(&a));
 return 0;
}

