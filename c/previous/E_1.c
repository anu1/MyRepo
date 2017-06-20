
#include<stdio.h>
main()
{
float area;
int radius=1;
area=circle(radius);
printf("%f \n",area);
}
circle(int r)
{
float a;
a=3.14*r*r;
return(a);
}
