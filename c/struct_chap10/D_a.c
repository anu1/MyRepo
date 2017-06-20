#include<stdio.h>
//program to print student names and data from a structure "STUDENTS"
struct student 
{
int rollno;
char name[100];
char department[50];
char course[60];
int yoj;
}s[3]={
	123,"Anuradha","CSE","data structure",2001,
	345,"raju","ECE","micro processors",2001,
	456,"reha","EEE","semi conductors",2005};
main()
{
int i,n,m;
printf("Enter  yoj :");
printf("Enter  rollno :");
scanf("%d",&n);
for(i=0;i<=2;i++) 
{
if(s[i].yoj == n) printf("%s \n",s[i].name);
else printf("No students joined in this particular year \n");
}
}
