//Read input from console and display array elements using functions

#include<stdio.h>

int read_array(int *,int);
int display_array(int *,int);
main()
{
int a[100],n;
printf("Enter n value:");
scanf("%d",&n);
read_array(a,n);
display_array(a,n);
}


int read_array(int *a,int n)
{
int i;
for(i=0;i<n;i++)
{
printf("enter %dth element: \n",i);
scanf("%d",a+i);
}
}

int display_array(int *a,int n)
{
int i;
printf("Elements entered in to the array are: \n");
for(i=0;i<n;i++) printf("%d \n", *(a+i));
}
