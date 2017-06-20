#include<stdio.h>
//program to print charachters from A-->G
main()
{
int i,j,k;
for(i=1;i<=7;i++)
{
        for(j=0;j<=7-i;j++) printf("%c",j+65);
	for(k=1;k<=2*(i-1);k++) printf(" ");
	//for(k=1;k<=i;k++) printf(" ");
	for(j=7-i;j>=0;j--) printf("%c",j+65);

printf("\n");
}
}
