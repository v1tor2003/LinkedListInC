#ifndef LIST_H_INCLUDED
  #define LIST_H_INCLUDED 

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct node{
  int info;
  struct node *next;
}Node;

Node* initialize();
Node* insert_at_start(Node* start, char letter);
Node* insert_at_end(Node *list, int number);
Node* concatenate(Node *list_A, Node *list_B);
Node* hide_B(Node *list_A, Node *list_B);
Node* find_evens(Node *even_list, Node *list_A);
Node* reverse_list(Node* list_A);
#endif