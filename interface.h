#ifndef INTERFACE_H_INCLUDED
#define INTERFACE_H_INCLUDED
#include "list.h"

void menu();
void end();
void show_list(Node* list);
void multiply_by_X(Node *list, int X);
void show_search_result(int result);
void show_search_equal(int result);

#endif
