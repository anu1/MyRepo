#include<stdio.h>
#include<math.h>
//Find the are of triangle
float area(float,float,float);
float avg(float,float,float);
main()
{
float a,b,c;
printf("Enter a, b and c float values:");
scanf("%f%f%f", &a,&b,&c);
printf("Area of the triangle is: %f \n",area(a,b,c)); 
}
//function to find the area of triangle
float area(float a,float b,float c)
{
float ar,S;
S=avg(a,b,c);
ar=sqrt(S*(S-a)*(S-b)*(S-c));
return ar;
}
//funtion to find S value
float avg(float a,float b,float c)
{
float s1;
s1=(a+b+c)/2;
return s1;
}

