#include<stdio.h>
//program to compare two given dates
struct date
{
int day;
int month;
int year;
}d[2];

read_date()
{
int  i;
for(i=0;i<2;i++)
  {
	printf("Enter Date-[%d] in day, month and year format :",i);
	scanf("%d%d%d",&d[i].day,&d[i].month,&d[i].year);
  }
}

compare_dates()
{
if(d[0].day == d[1].day && d[0].month == d[1].month &&  d[0].year == d[1].year) 
	printf("Equal");
else 
	printf("Unequal");
}

main()
{
read_date();
compare_dates();
}
