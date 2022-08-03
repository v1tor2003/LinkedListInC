#include "manipulations.h"

int get_element(){
  int element;
  fflush(stdin);
  printf("Type a number: ");
  scanf("%d", &element);
  return element;
}

int get_option(){
  int decision;
  menu();
  while(TRUE){
    printf("\nSelect your option: ");
    scanf("%d", &decision);
    if(decision >= 0 && decision <= 11){
        return decision;
    }else{
        puts("\nSelect a valid option (0-11) !!!");
    }
  }
}

int count_elements(Node* list){
  int count = 0;
  while (list){
      count++;
      list = list->next;
  }
  return count;
}

int find_bigger(Node* list_A){
  int bigger;
  bigger = list_A->info;
  while (list_A){
    if(list_A->info > bigger){
      bigger = list_A->info;
    }
    list_A = list_A->next;
  }
  return bigger;
}

int elements_equal_N(Node *list, int N){
    int elements_qntd = 0;
    while(list){
        if(list->info == N){
            elements_qntd++;
        }
        list = list->next;
    }
    if(elements_qntd !=0)
        return elements_qntd;
    else
        return NULL;
}

int search_for_N(Node* list, int N){
    int position = 1;
    while(list){
        if(list->info == N){
            return position;
        }
        position++;
        list = list->next;
    }
    return NULL;
}