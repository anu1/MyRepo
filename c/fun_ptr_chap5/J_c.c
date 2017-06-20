#include<stdio.h>
//recursive function to obtain fibonacci series
main()
{
int n,i=0,c;
printf("enter n value:");
scanf("%d",&n);
printf("Fibonacci series\n");
for ( c = 1 ; c <= n ; c++ )
{
//printf("%d\n", fib(i));
i++; 
}

printf("\n");
fib2(n);

return 0;
}
 
int fib(int n)
{
   if ( n == 0 ) return 0;
   else if ( n == 1 ) return 1;
   else return ( fib(n-1) + fib(n-2) );
} 

// recursion to print series
int fib2(int n)
{ 
   static int a1=0, a2=1;
   int t;
   if (n == 0) return 0;
   if (n >= 1 )
	{
	   printf("%d\n", a2);
	   t = a1;
	   a1=a2;
	   a2= t + a2;
	   fib2(n-1);
	}
}

   
