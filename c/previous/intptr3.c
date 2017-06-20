#include<stdio.h>

// int ptr calculation - 2
//
int main(void)
{
 int a[3] = {1,2,3};
 char *p;
  
 printf("\n Address of a[0] = %u", &a[0]);
 printf("\n Address of a[0] = %u", &a[1]);
 printf("\n Address of a[0] = %u", &a[2]);
 
 p =  &a[0];  // p now contains address of a[0]
 printf("\n value of a[0] using ptr = %d ", *(p));
 p++;
 printf("\n value at [p+1] = %d ", *(p));

 printf("\n");
 return 0;
}

