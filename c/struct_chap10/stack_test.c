/*
 *  * C Program to Implement a Stack using Linked List
 *   */
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int data;
    struct node *next;
}*top,*start,*temp;
 
 
void main()
{
            push();
            pop();
            display();
}
 
 
/* Push data into stack */
void push()
{
    int i;
        top =(struct node *)malloc(1*sizeof(struct node));
        top->next = NULL;
        top->data = 1;
    
        for(i=2;i<=5;i++)
	{
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->next = top;
        temp->data = i;
        top = temp;
	}
    
}
 
/* Display stack elements */
void display()
{
    start = top;
 
    if (start == NULL)
    {
        printf("Stack is empty");
        return;
    }
 
    while (start != NULL)
    {
        printf("%d \n", start->data);
        start = start->next;
    }
 }
 
/* Pop Operation on stack */
void pop()
{
    start = top;
 
    if (start == NULL)
    {
        printf("\n Error : Trying to pop from empty stack");
        return;
    }
    else
        start = start->next;
    printf("\n Popped value : %d \n", top->data);
    free(top);
    top = start;
}
 
 
 
