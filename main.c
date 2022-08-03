#include "interface.c"
#include "manipulations.c"
#include "list.c"

int main (void){
  int option, number, elements_qntd, bigger_element, same_to_N, X, N, search_N;
  char b_element;
  Node *list_A, *list_B, *list_C, *even_list;

  list_A = initialize();
  list_B = initialize();
  list_C = initialize();
  even_list = initialize();
  
  while(TRUE){
    option = get_option();
    if(option == 0){
        end();
        break;
    }else{
        switch(option){
        case 1: 
            number = get_element(); 
            list_A = insert_at_start(list_A, number);
            break;
        case 2:
            number = get_element();
            list_A = insert_at_end(list_A, number);
            break;
        case 3:
            bigger_element = find_bigger(list_A);
            printf("The biggest stored element is %d\n", bigger_element);
            break;
        case 4:
            elements_qntd = count_elements(list_A);
            printf("The list has %d elements\n", elements_qntd);
            break;
        case 5:
            X = get_element();
            multiply_by_X(list_A, X);
            break;
        case 6:
            N = get_element();
            search_N = search_for_N(list_A, N);
            show_search_result(search_N);
            break;
        case 7:
            N = get_element();
            same_to_N = elements_equal_N(list_A, N);
            show_search_equal(same_to_N);
            break;
        case 8:
            list_A = reverse_list(list_A);
            puts("The list has been reversed!");
            break;
        case 9:
            even_list = find_evens(even_list, list_A);
            puts("Even List: ");
            show_list(even_list);
            break;
        case 10:
            while (TRUE){
              number = get_element();
              list_B = insert_at_end(list_B, number);
              printf("Do you want to insert one more element? (type y/n)");
              fflush(stdin);
              scanf("%c", &b_element);
              if(b_element == 'n'){
                break;
              }
            }
            printf("A list: ");
            show_list(list_A);
            printf("B list: ");
            show_list(list_B);
            list_C = concatenate(list_A, list_B);
            puts("Concatenated lists: ");
            show_list(list_C);
            list_C = hide_B(list_A, list_B);
            break;
        case 11:
            printf("A list: ");
            show_list(list_A);
            break;
        default:
            break;
        }
    }
  }
  return 0;
}