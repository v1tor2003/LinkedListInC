#include "interface.h"

void menu(){ 
  puts("\n\t--- Select your option ---");
  puts("1.  Insert element at the beginning.");
  puts("2.  Insert element at the end.");
  puts("3.  Show biggest element.");
  puts("4.  Show quantity of stored elements.");
  puts("5.  Multiply list by X.");
  puts("6.  Find element N.");
  puts("7.  Count elements equal to N.");
  puts("8.  Reverse list.");
  puts("9.  Even list.");
  puts("10. Concatenate lists."); 
  puts("11. Show list.");
  puts("0.  Finish execution");
}

void end(){
  puts("\n--- END OF PROGRAM ---");
}

void show_list(Node* list){
  while(list){
    printf(" %d ->", list->info);
    list = list->next;
  }
  printf("\n");
}

void multiply_by_X(Node *list, int X){
    while(list){
        list->info = list->info * X;
        list = list->next;
    }
    printf("The elements have been multiplied by %d!\n", X);
}

void show_search_result(int result){
    if(result)
        printf("The element N is at position %d.", result);
    else
        puts("The element N is not in the list.");
}

void show_search_equal(int result){
    if(result)
        printf("The element N is equal to %d element(s).\n", result);
    else
        puts("There are no elements equal to N in the list.");
}
