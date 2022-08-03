#include "list.h"

Node* initialize(){
  return NULL;
}

Node* insert_at_start(Node* start, char letter){
  Node *ptr;
  ptr = (Node *) malloc(sizeof(Node));
  ptr->info = letter;
  ptr->next = start;
  start = ptr;
  return start;
}

Node* insert_at_end(Node *list, int number){
  Node* ptr = list;
  Node* new = (Node *) malloc(sizeof(Node));
  new->info = number;
  new->next = NULL;

  if(list == NULL){
    return new;
  }
  else{
    while(ptr->next != NULL){
      ptr = ptr->next;
    }
    ptr->next = new;
    return list;
  }
}

Node* concatenate(Node *list_A, Node *list_B){
  Node *ptr = list_A;
  while (ptr->next != NULL){
    ptr = ptr->next;
  }
  ptr->next = list_B;
  return list_A;
}

Node* hide_B(Node *list_A, Node *list_B){
  Node *ptr = list_A;
  Node *b_start = list_B;
  while (ptr->next != b_start){
    ptr = ptr->next;
  }
  ptr->next = NULL;
  return list_A;
}

Node* find_evens(Node *even_list, Node *list_A){
  Node *ptr = list_A;
  while (ptr){
    if(ptr->info >= 0){
      if (ptr->info % 2 == 0){
      even_list = insert_at_end(even_list, ptr->info);
      }
    } 
    ptr = ptr->next;
  }
  return even_list;
}

Node* reverse_list(Node* list_A){
  Node* previous = NULL;
  Node* current = list_A;
  Node* following;
  while (current != NULL){
    following = current->next;
    current->next = previous;
    previous = current;
    current = following;
  }
  return previous;
}

