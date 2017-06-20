#include <stdio.h>
 
int main()
{
   int a[100], pos, i, n, value;
 
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
   for (i = 0; i < n; i++) scanf("%d", &a[i]);
 
   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &pos);
 
   printf("Enter the value to insert\n");
   scanf("%d", &value);
 
   for (i = n; i > pos; i--)  a[i] = a[i-1];
   a[pos] = value;
 
   printf("Resultant array is\n");
   for (i = 0; i <= n; i++)   printf("%d\n", a[i]);
 
   
}
