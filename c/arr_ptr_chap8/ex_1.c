#include<stdio.h>
//Demonstration of call by reference in arrays 
main()
{
int i;
int marks[]={55,65,75,56,78,90};
for(i=0;i<=5;i++) 
 {
  //printf("in Main : %ld \n", &marks[i]);
  disp(&marks[i]);
 }
}
disp(int *n)
{
printf("Inside display [n] %u -> [&n] %u -> [*n] %ld \n",n, &n,*n);
show(&n);
//printf("%d \n",*marks);
}

show(int **m)
{
  printf("%u -> %u -> %d \n", m, *m, **m );
}
