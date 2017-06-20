#include<stdio.h>
//create a linked list in C
struct node
{
int data;
struct node *next;
};
typedef struct node N;

main()
{
N *head, *list, *tmp;
int i;
//create first element
head = (N *) malloc(sizeof(N));
tmp = head;

head->data=1;
head->next=NULL;

//creat next 9 elements
for(i=2;i<=5;i++)
{
list = (N *) malloc(sizeof(N));

list->data = i;
list->next = NULL;

tmp->next = list;
tmp=tmp->next;
}
 printlist(head);
 insert_at_begin(head);
 insert_at_end(head);
 delete_from_begin(head);
}


void printlist(N* head)
{
N  *temp;
temp = head;
while(temp != NULL)
{
printf("%d \n",temp->data);
temp=temp->next;
}
}


void insert_at_end(N* head)
{
N *tmp;
tmp = (N *) malloc(sizeof(N));
while(head->next != NULL)
{
tmp->data = 30;
tmp->next = NULL;

head->next = tmp;
}
head = head->next;
}


void insert_at_begin(N* head)
{
N *tmp;
tmp=(N*) malloc(sizeof(N));
tmp->data=100;
tmp->next=head;
head=tmp;
}

N* delete_from_begin(N* head)
{
N *tmp;
tmp=head->next;
free(head);
return tmp;

}
