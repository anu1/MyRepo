//sort the elements of the array using bubble sort
#include<stdio.h>

int read_array(int *,int);
int display_array(int *,int);
int bubble_sort(int *,int);
main()
{
int a[100],n;
printf("Enter n value:");
scanf("%d",&n);
read_array(a,n);
display_array(a,n);
bubble_sort(a,n);
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

int bubble_sort(int *a,int n)
{
int i,j,temp;
printf("Array elements after sorting \n");
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(*(a+j)>*(a+j+1)) 
{
temp=*(a+j);
*(a+j)=*(a+j+1);
*(a+j+1)=temp;
}
}
}
printf("Sorted list in ascending order:\n");
for(i=0;i<n;i++) printf("%d\n",a[i]);
}
