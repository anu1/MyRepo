/*

 	* C Program to sort an array based on  heap sort algorithm(MAX heap)

 	*/

	#include <stdio.h>
	void heapsort(int [], int maxsize);
	void buildmaxheap(int [], int);

        void printarray(int A[10], int a, int b)
	{
         int i;
   	 //printf("- calling A[10], %d %d\n", a, b);
   	 for(i=a; i <= b; i++)
   	 printf("%d ",A[i]);
         printf("\n");
	}

	void heapsort(int A[10], int maxsize)
	{
    	int tmp;
    	while (maxsize > 0) {
    	buildmaxheap(A, maxsize);
    	//swap A[0] with A[n-1];
    	tmp = A[maxsize];
    	A[maxsize] = A[0];
    	A[0] = tmp;
    	maxsize--;
    	}
	}


	void buildmaxheap(int A[10], int n)
	{
    	int tmp,root, max, pos;
    	while ( n > 0 ){
	

   	if ( n%2 == 0 ) { // even number, i.e. both left and right children exist
   	root = (n-2) / 2 ; // right child root
   	max = A[n] > A[n-1] ? A[n] : A[n-1];
   	pos = (max == A[n] ) ? n : n-1;
   	if( A[root] < max ) { //root has less value than childen max
   	 tmp = A[root];
   	 A[root] = max;
   	 A[pos] = tmp;
   	 } // if
   	 n -= 2;
   	 } // if

   	 else { // odd number, only left child exist
   	 root = (n-1)/2; // left child root;
   	 if ( A[root] < A[n]) {//root has less value than left child
   	 tmp = A[root];
   	 A[root] = A[n];
   	 A[n] = tmp;
   	 } // if
   	 n--; // decrement by 1
   	 } // if


    	 }
	 }
   	 



	void main()
	{
   	 int heap[10], no, i;
    	 printf("\n Enter no of elements :");
    	 scanf("%d", &no);
    	 printf("\n Enter the nos : ");
    	 for (i = 0; i < no; i++)
       	 scanf("%d", &heap[i]);
   	 heapsort(heap, no-1);
    	 printf("\nSorted array : ");
    	 for (i=0; i < no; i++)
      	 printf("%d ", heap[i]);
    	 printf("\n");
         return;
	}
