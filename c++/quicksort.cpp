#include<cstdio>
#include<iostream>
using namespace std;

// c++ program to perform quick sort

class quicksort {
    int A[50];
    int n;
public:
    void readelements(void);
    void printelements(void);
    void sort(int, int);
    int arraysize(void) { return n;}
};

void quicksort::readelements(void) {
    printf( "Enter the n value (max 50) : " );
    scanf("%d",&n);
    printf("Enter the elements in the NON sorted order \n" );
    for (int i=0; i < n ; i++) {
    //printf("Enter element %d : ",i+1);;
    scanf("%d",&A[i]);
    }
}

void quicksort::printelements(void) {
    printf("Array elements are ...");
    for(int i=0; i <n ; i++) {
        printf("%d \t",A[i]);
    }
    printf("\n");
}

void quicksort::sort(int left, int right) {
   int p,temp,l,r;
   if(left<right){
   p=A[left];
   l=left;
   r=right;
   while(l<r){
      while(A[l] <= p && l<r )
	   l++;
      while(A[r]>p && l<=r )
	   r--;
      if(l<=r){
		temp=A[l];
		A[l]=A[r];
		A[r]=temp;
      }
  }
  temp=A[r];
  A[r]=A[left];
  A[left]=temp;
  sort(left,r-1);
  sort(r+1,right); 
  }
    
}
int main()
{
    quicksort qs;
    qs.readelements();
    printf(" before sorting ");
    qs.printelements();
    qs.sort(0, qs.arraysize()-1);
    printf(" after sorting ");

    qs.printelements();
    return 0;
}
