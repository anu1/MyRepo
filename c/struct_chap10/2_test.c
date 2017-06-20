#include <stdio.h>
#include <stdlib.h>

struct node {
    int data; //Data part
    struct node *next; //Address part
}*head;
 
void createList(int n);
void traverseList();
 
int main()
{
    int n;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
 
    createList(n);
 
    printf("\nData in the list \n");
    traverseList();
 
    return 0;
}
 

 
 
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;
 
    head = (struct node *)malloc(sizeof(struct node));
 
     
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("Enter the data of node 1: ");
        scanf("%d", &data);
 
        head->data = data; //Links the data field with data
        head->next = NULL; //Links the address field to NULL
 
        temp = head;
         
         
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
else
    {
    printf("Enter the data of node %d: ", i);
    scanf("%d", &data);
    newNode->data = data; //Links the data field of newNode with data
    newNode->next = NULL; //Links the address field of newNode with NULL
    temp->next = newNode; //Links previous node i.e. temp to the newNode
    temp = temp->next; 
            }
        }
    }
}
 


 
void traverseList()
{
    struct node *temp;
 
    
     
     
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); //Prints the data of current node
            temp = temp->next; //Advances the position of current node
        }
    }
}