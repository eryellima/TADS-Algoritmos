#ifndef _LINKED_LIST_INT_H_ 
#define _LINKED_LIST_INT_H_ 
typedef struct list_int_node node;

struct linked_list_int *linked_list_create();

int linked_list_get(struct linked_list_int *lista, int index);

void linked_list_push_back(struct linked_list_int *lista, int valor);

unsigned int linked_list_pop_back(struct linked_list_int *lista);

unsigned int linked_list_size(struct linked_list_int *lista);

unsigned int linked_list_insert_at(struct linked_list_int *lista, int index, int valor);

unsigned int linked_list_capacity(struct linked_list_int * lista);

double linked_list_percent_occupied(struct linked_list_int * lista);

void linked_list_destroy(struct linked_list_int * list);

int linked_list_find(struct linked_list_int *lista, int element);

int linked_list_remove_from(struct linked_list_int * lista, int index);

void print_list(struct linked_list_int *lista);

#endif