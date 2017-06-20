#include<stdio.h>
struct node
{ 
int data;
struct node *next;
};
typedef struct node N;

N *head,*list;
main()
{
int i;

N *tmp;
list = (N*) malloc(sizeof(N));
head=list;
list->data=1;
list->next=NULL;
for(i=2;i<5;i++)
{
tmp = (N*) malloc(sizeof(N));
tmp->data=i;
tmp->next=NULL;
list->next=tmp;
list=list->next;
}
printf("Here is the list of the elements of the newly created linked list\n");
print();
printf("Inserted the element at the end\n");
insert_at_end();
printf("Inserted the element at the begin\n");
insert_at_begin();
printf("After deleting the element at the begin\n");
delete_at_begin();
printf("After deleting the element at the end\n");
delete_at_end();
}
void print()
{
N *tmp;
tmp=head;
while(tmp != NULL)
{
printf("%d\n",tmp->data);
tmp=tmp->next;
}
}

void insert_at_end()
{
N *tmp, *list;
list=head;
tmp= (N*) malloc(sizeof(N));
tmp->data=100;
tmp->next=NULL;
while(list->next != NULL)
	list=list->next;
list->next=tmp;
list=list->next;
print();
}
void insert_at_begin()
{
N *list, *tmp;
tmp= (N *) malloc(sizeof(N));
tmp->data = 200;
tmp->next=head;
head=tmp;
print();
}
void delete_at_begin()
{
N *tmp1,*temp2;
tmp1=head;
head= head->next;
free(tmp1);
print();
}
void delete_at_end()
{
N *tmp,*list;
tmp=head;
while(tmp->next != NULL ){
	list=tmp;
	tmp=tmp->next;
}
list->next=NULL;
free(tmp);
print();
}
