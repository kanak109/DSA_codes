#include <stdio.h>
#include<stdlib.h>

// Creating a node
typedef struct node n1;

struct node {
  int value;
  struct node *next;
};

struct node *head;

void printLinkedlist(n1 *p) {
    p = head;
    while (p != NULL) {
        printf("%d ", p->value);
        p = p->next;
  }
}

void insert(int data){
    n1 *temp = (n1*) malloc(sizeof(n1));
    temp-> value = data;
    temp-> next = NULL ;
    if(head == NULL){
        head = temp;
       // head = new node();
     }
     else{
         n1 *t;
         t = head;
         while(t->next!=NULL){

             t = t->next;
         }
         t->next = temp;

     }

}

int main() {
  // Initialize nodes
//  n1 *head;
//  n1 *one = malloc(sizeof(n1));
//  n1 *two = malloc(sizeof(n1));
//  n1 *three = malloc(sizeof(n1));
  head = NULL;

  insert(1);
  insert(4);
  insert(3);

  printLinkedlist(head);



  // Allocate memory
//  one = malloc(sizeof(n1));
//  two = malloc(sizeof(n1));
//  three = malloc(sizeof(n1));

//  // Assign value values
//  one->value = 1;
//  two->value = 2;
//  three->value = 3;
//
//  // Connect nodes
//  one->next = two;
//  two->next = three;
//  three->next = NULL;
//
//  // printing node-value
//  head = one;
//  printLinkedlist(head);

  return 0;
}
