#include<stdio.h>
//C program to write a queue data structure
struct node 
{
int data;
struct node *next;
};
typedef struct node N;
N *front,*rear,*temp,*start;
main()
{
enq();
deq();
deq();
display();
}
void enq()
{
int i;
rear = (N *) malloc(sizeof(N));
rear->data=1;
rear->next=NULL;
front=rear;

for(i=2;i<=5;i++)
{
temp=(N*) malloc(sizeof(N));
rear->next = temp;
temp->data = i;
temp->next = NULL;
 
rear = temp;
}
}	

void display()
{
start = front;
if ((start == NULL) && (rear == NULL))
{
printf("Queue is empty");
return;
}
while (start != rear)
{
printf("\n%d\n ", start->data);
start = start->next;
}
if (start == rear)
	printf("\n%d\n", start->data);
}
void deq()
{
start = front;
 
    if (start == NULL)
    {
        printf("\n Error: Trying to display elements from empty queue");
        return;
    }
    else
        if (start->next != NULL)
        {
            start = start->next;
            printf("\n Dequed value : %d", front->data);
            free(front);
            front = start;
        }
        else
        {
            printf("\n Dequed value : %d", front->data);
            free(front);
            front = NULL;
            rear = NULL;
        }
printf("\n Queue after deleting elements in it\n");
//display();
} 
