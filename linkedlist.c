/*#include<stdio.h>
#include<stdlib.h>

typedef struct node NODE;

struct node{   // basically it is a NODE type structure
    int value;
    NODE *next; //struct node *next;

};

NODE *node_data (int item, NODE *next){

    NODE *newNode = (NODE *) malloc(sizeof(NODE));
    if( newNode == NULL){
        printf("Error in making node!");
        exit(1);
    }

    newNode ->value = item;
    newNode ->next = next;

    return newNode;

}


int main()
{
    NODE *n;
    n = node_data(10,NULL);

    printf("Value -> %d", n->value);


    return 0;
}
*/


// Linked list implementation in C


#include <stdio.h>
#include <iostream>

// Creating a node
struct node {
  int value;
  struct node *next;
};

// print the linked list value
void printLinkedlist(struct node *p) {
  while (p != NULL) {
    printf("%d ", p->value);
    p = p->next;
  }
}

int main() {
  // Initialize nodes
  struct node *head;
  struct node *one = NULL;
  struct node *two = NULL;
  struct node *three = NULL;

  // Allocate memory
  one = malloc(sizeof(struct node));
  two = malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));

  // Assign value values
  one->value = 1;
  two->value = 2;
  three->value = 3;

  // Connect nodes
  one->next = two;
  two->next = three;
  three->next = NULL;

  // printing node-value
  head = one;
  printLinkedlist(head);
}
