#include <stdio.h>
#include <stdlib.h>
 
struct node {
   int data;
   struct node *next;
};

typedef struct node N;
 
N *list = NULL;
void insert_at_begin(int);
void insert_at_end(int);
void traverse();
void delete_from_begin();
void delete_from_end();
int count = 0;
 
int main () {
   int  data,input;
for (;;) {
      printf("1. Insert an element at beginning of linked list.\n");
      printf("2. Insert an element at end of linked list.\n");
      printf("3. Traverse linked list.\n");
      printf("4. Delete element from beginning.\n");
      printf("5. Delete element from end.\n");
      printf("6. Exit\n");
 
      scanf("%d", &input);
 
        if (input == 1) {
 
         printf("Enter value of element\n");
         scanf("%d", &data);
         insert_at_begin(data);
	}
	else if (input == 2) {
         printf("Enter value of element\n");
         scanf("%d", &data);
         insert_at_end(data);
	}
	else if (input == 3)
         traverse();
	else if (input == 4)
         delete_from_begin();
	else if (input == 5)   
         delete_from_end();
	else if (input == 6)  break;
 	printf("Please enter valid input.\n");      
   }
 
   return 0;
}

//Insert at the beginning of the linked list 
void insert_at_begin(int x) {
   N *t;
   t = (N*)malloc(sizeof(N));
   count++;
 
   if (list == NULL) {
      list = t;
      list->data = x;
      list->next = NULL;
      return;
   }
 
   t->data = x;
   t->next = list;
   list = t;
}
 

//Insert  node at the end of the list
void insert_at_end(int x) {
   N *t, *temp;
   t = (N*)malloc(sizeof(N));
   count++;
 
   if (list == NULL) {
      list = t;
      list->data = x;
      list->next = NULL;
      return;
   }
 
   temp = list;
 
   while (temp->next != NULL)
      temp = temp->next;   
      temp->next = t;
      t->data    = x;
      t->next    = NULL;
}
 
//print all the values of a list
void traverse() {
   N *t;
   t = list;
   if (t == NULL) {
      printf("Linked list is empty.\n");
      return;
   }
   printf("There are %d elements in linked list.\n", count);
   while (t->next != NULL) {
      printf("%d", t->data);
      t = t->next;
   }
   printf("%d \n", t->data);
}
 

//Delete a value from the beginning of the list
void delete_from_begin() {
   N *t;
   int n;
 
   if (list == NULL) {
      printf("Linked list is already empty.\n");
      return;
   }
 
   n = list->data;
   t = list->next;
   free(list);
   list = t;
   count--;
 
   printf("%d deleted from beginning successfully.\n", n);
}
 

//Delete an element at the end of the list
void delete_from_end() {
   N *t, *u;
   int n;
 
   if (list == NULL) {
      printf("Linked list is already empty.\n");
      return;
   }
 
   count--;
 
   if (list->next == NULL) {
      n = list->data;
      free(list);
      list = NULL;
      printf("%d deleted from end successfully.\n", n);
      return;
   }
 
   t = list;
 
   while (t->next != NULL) {
      u = t;
      t = t->next;
   }
 
   n = t->data;
   u->next = NULL;
   free(t);
 
   printf("%d deleted from end successfully.\n", n);
}
