#include<stdio.h>
//C program to convert decimal numbers to binary numbers
long decToBin(long n);
int main() 
{
   long decimal;
   printf("Enter a decimal number\n");
   scanf("%ld", &decimal);
   printf("Binary number of %ld is %ld \n", decimal, decToBin(decimal));
     
}
 
long decToBin(long n) {
    int remainder; 
    long binary = 0, i = 1;
    while(n != 0) {
        remainder = n%2;
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;
    }
    return binary;

}
