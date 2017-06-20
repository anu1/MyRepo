#include<stdio.h>
#include<string.h>
struct virus
{
char signature[25];
char status[20];
int size;
}v[2]={
	"Yankee Doodle","Deadly",1813,
	"Darker Avenger","Killer",1795
      };
main()
{
int i;
for(i=0;i<=1;i++) printf("\n %s \n %s \n",v[i].signature,v[i].status);
}	
