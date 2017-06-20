#include<stdio.h>
//using strlen
main()
{
char arr[]="Bamboozled";
int len1,len2;
len1=strlen(arr);
len2=strlen("HumptyBumpy");
printf("string = %s length = %d \n", arr, len1);
printf("string = %s length = %d \n", "Humpty Bumpty", len2);
}
