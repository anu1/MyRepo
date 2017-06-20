#include<stdio.h>
#include<math.h>

//program to calculate compound interest on 10 sets of data
main()
{
float i,p,r,temp1,temp2,a,c;
int n,q;
printf("Enter p,r,n and q values:");
scanf("%f%f%d%d",&p,&r,&n,&q);
temp1=(n*q);
temp2=(1+(r/q));
c = pow(temp2,temp1);
printf("value of c is: %f ",c);
a=p*c;
printf("Total amount calculated is :%f \n",a);
}
