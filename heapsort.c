/*
 *  * C Program to sort an array based on heap sort algorithm(MAX heap)
 *   */ 
#include <stdio.h>
void max_heapify(int heap[],int no);
void heap_sort(int heap[],int no);
   
void printarray(int A[], int n)
{
// function to print array
 int i;
 printf("\n");
 for(i=0; i < n; i++)
 	printf("%d\t", A[i]);
 printf("\n");
}


void main()
{
    int heap[10], no, i;
    printf("\n Enter no of elements :");
    scanf("%d", &no);
    printf("\n Enter the nos : ");
    for (i = 0; i < no; i++)
    scanf("%d", &heap[i]);
    heap_sort(heap,no);
    printarray(heap, no);
    printf("\n");
    return;
}
    void max_heapify(int heap[],int no)
    {
    int max,i,k,root,left,right,temp,temp2,pos;
    max = no-1;
    root=(max-1)/2;
    while(root>=0)
    {
    left=root*2+1;
    right=root*2+2;
    if(right>max) {// single child case, if right node does not exist
    	if(heap[left]>heap[root]) {//As right node does not exist, directly compare left and root nodes
		temp=heap[left];
		heap[left]=heap[root];
		heap[root]=temp;
	}
    }
    else{
    	if(heap[left]>heap[right]){
    		temp=heap[left];
    		pos=left;
        }
        else{
    	     temp=heap[right];
     	     pos=right;
    	}
    	if(temp>heap[root]){
    		temp2=heap[root];
    		heap[root]=temp;
    		heap[pos]=temp2;
    	}
    }
    root--;
    }//End of while loop
    }

void heap_sort(int heap[],int no)
 {
    int j,k,temp;
    j = no-1;
    while(j > 0)
    {
        max_heapify(heap,j+1);
        temp = heap[0];
        heap[0] = heap[j];//swap max ele with rightmost leaf ele 
        heap[j] = temp;
	j--;
    }	
 }
