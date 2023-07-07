#ifndef _ARRAY_LIST_INT_H_ 
#define _ARRAY_LIST_INT_H_  

struct array_list_int *array_list_create();

int array_list_get(struct array_list_int *list, int index);

unsigned int array_list_push_back(struct array_list_int *list, int i);

unsigned int array_list_pop_back(struct array_list_int *list);

unsigned int array_list_size(struct array_list_int *list);

int array_list_find(struct array_list_int *list, int element);

unsigned int array_list_insert_at(struct array_list_int *list, int index, int value);

void print_array(struct array_list_int *list);

int array_list_remove_from(struct array_list_int *list, int index);

unsigned int array_list_capacity(struct array_list_int *list);

double array_list_percent_occupied(struct array_list_int *list);

void array_list_destroy(struct array_list_int *list);

#endif