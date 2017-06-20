//Find number of odd,even, positive and negative numbers
#include<stdio.h>
main()
{
int arr[8],i,a,pos=0,neg=0,even=0,odd=0;

printf("Enter values in to the array \n");
for(i=0;i<=7;i++)
{
scanf("%d", &arr[i]);
}

printf("Elements entered in to the array: \n");
for(i=0;i<=7;i++) printf("%d  \n", arr[i]);

for(i=0;i<=7;i++) 
{ 
if((arr[i]) > 0)  pos++; 
else neg++;
if(arr[i]%2 == 0) even++;
else odd++;
}
printf("Number of +ve integers is:%d \n",pos);
printf("Number of -ve integers is:%d \n",neg);
printf("Number of even numbers is:%d \n",even);
printf("Number of odd numbers is:%d \n",odd);
}  
