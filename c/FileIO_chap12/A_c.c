#include<stdio.h>
main()
{
char fname[]="A_c";
FILE *fp;
fp=fopen(fname,"rb");
if(fp==NULL) printf("Unable to open file...\n");
}
