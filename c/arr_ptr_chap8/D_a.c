//search for a given number in the array and print how many times it has occured

#include<stdio.h>
main()
{
int arr[5],i,a,j=0;;

printf("Enter values in to the array \n");
for(i=0;i<=4;i++)
{
scanf("%d", &arr[i]);
}

printf("Elements entered in to the array: \n");
for(i=0;i<=4;i++) printf("%d  \n", arr[i]);

printf("Enter a value to be searched:");
scanf("%d",&a);

for(i=0;i<=4;i++) { if((arr[i])==a)  j++; }
if(j!=0) printf("Element to searched is found %d times \n",j);
else printf("Element to be searched is not found \n");

}  
