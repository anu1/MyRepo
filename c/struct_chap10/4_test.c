#include<stdio.h>
//create a linked list in C
struct node
{
int data;
struct node *next;
};
typedef struct node N;
N *head;
int pos,n;
main()
{
N  *list, *tmp;
int i;
//create first element
head = (N *) malloc(sizeof(N));
list = head;

head->data=1;
head->next=NULL;

//creat next 9 elements
for(i=2;i<=5;i++)
{
tmp = (N *) malloc(sizeof(N));

tmp->data = i;
tmp->next = NULL;

list->next = tmp;
list=list->next;
}
 printf("Printing the initial list\n");
 printlist();
 insert_at_end();
 insert_at_begin();
 delete_last(head);
}


void printlist()
{
pos = 1;
N  *temp;
temp = head;
while(temp != NULL)
{
printf("Element %d is present in location %d\n",temp->data,pos);
temp=temp->next;
pos++;
}
}


void insert_at_end()
{
printf("Printing the linked list after adding an element in the end\n");
N *tmp,*list;
list=head;
tmp = (N *) malloc(sizeof(N));
while(list->next != NULL) 
	list=list->next;

tmp->data = 30;
tmp->next = NULL;
list->next = tmp;
printlist();
}

void insert_at_begin()
{
printf("Printing the linked list after adding an element in the begin\n");
N *tmp;
tmp=(N *) malloc(sizeof(N));
tmp->data=100;
tmp->next=head;
head=tmp;
printlist();
}

void delete_last()
{
int m;
printf("Enter the position of the element to be deleted:");
scanf("%d",&m);
printf("Printing the list after deleting an element at a given position\n");
N *tmp,*list;
int i;
list=head;
n=m;
if(n==1) 
{
head = list->next;
free(list);
return;
}
printlist();
for(i=0;i<n-2;i++)
list=list->next;
tmp= list->next;
list->next=tmp->next;
free(tmp);

printlist();
}
