#include<cstdio>

// c++ program to implement binary search algorithm

class bsearch {
	int A[30];
	int n; // max elements
	int first,last,middle;
public:
	void printelements(void);
	void readelements(void);
	void binarysearch(int);
};

void bsearch::printelements(void) {
		int i=0;
		printf("\nArray elements are...\n");
		for(; i < n; i++) {
			printf("%d\t", A[i]);
		}
		printf("\n");
}

void bsearch::readelements(void) {
		int i=0;
		printf("\nEnter n value ");
		scanf("%d", &n);
		
		printf("\nEnter the elements in sorted order \n");
		for(; i < n; i++) {
			printf("Enter element [%d] : ", i+1);
			scanf("%d", &A[i]);
		}
		
		// show the array elements
		// printelements();
}

void bsearch::binarysearch(int elem) {
	
	first=0;
  last=n-1;
  middle=(first+last)/2;
  while(last>=first)
  {
    middle=(first+last)/2;
    if(elem>A[middle])
      first=middle+1;
    else if(elem<A[middle])
      last=middle-1;
    else
    {
      printf("Element %d found in the array \n",elem);
      break;
    }
  }
}

int main()
{
	bsearch b1;
	
	int t;
	b1.readelements();
	b1.printelements();
	printf("\nEnter the array element to be searched :");
	scanf("%d", &t);
	b1.binarysearch(t);
	return 0;
}	
