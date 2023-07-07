#include <stdlib.h>
#include <stdio.h>
#include "array_list_int.h"

struct array_list_int
{
    int *a;
    unsigned int size, capacity;
};

struct array_list_int *array_list_create(){
    struct array_list_int *new_list = (struct array_list_int *)malloc(sizeof(struct array_list_int));
    if (new_list == 0)
        return 0;
    new_list->a = (int *)malloc(sizeof(int) * 8);
    if (new_list->a == 0){
        free(new_list);
        return 0;
    }
    new_list->size = 0;
    new_list->capacity = 8;
    return new_list;
}

int array_list_get(struct array_list_int *list, int index){
    if (index > list->size){
        return 0;
    }
    return list->a[index];
}

unsigned int array_list_push_back(struct array_list_int *list, int value){
    if (list->capacity == list->size){
        list->capacity = list->capacity + 10;
        int *novo = (int *)malloc(sizeof(int) * (list->capacity));
        int *antigo = list->a;
        for (int i = 0; i < list->size; i++){
            *(novo + i) = *(antigo + i);
        }
        list->a = novo;
        free(antigo);
    }
    list->a[list->size] = value;
    list->size++;
    return list->size;
}

unsigned int array_list_pop_back(struct array_list_int *list){
    if (list->size == 0){
      return 0;
    }
    list->size--;
    return array_list_size(list);
}

unsigned int array_list_size(struct array_list_int *list){
    return list->size;
}

int array_list_find(struct array_list_int *list, int element){
    for (int i = 0; i < list->size; i++){
        if (list->a[i] == element){
            return i;
        }
    }
    return -1;
}

unsigned int array_list_insert_at(struct array_list_int *list, int index, int value){
    if (index == array_list_size(list)){
        array_list_push_back(list, value);
    }
    else if (index >= 0 && index < array_list_size(list)){
        if (list->capacity == list->size){
            list->capacity = list->capacity + 10;
            int *novo = (int *)malloc(sizeof(int) * (list->capacity));
            int *antigo = list->a;
            for (int i = 0; i < list->size; i++){
                *(novo + i) = *(antigo + i);
            }
            list->a = novo;
            free(antigo);
        }

        for (int i = list->size; i > index - 1; i--){
            list->a[i] = list->a[i - 1];
        }
        list->a[index] = value;
        list->size++;
        return array_list_size(list);
    }
    return -1;
}

int array_list_remove_from(struct array_list_int *list, int index){
    if (index >= list->size){
      return array_list_size(list);
    }
    for (int i = index; i < list->size - 1; i++){
        list->a[i] = list->a[i + 1];
    }
    list->size--;
    return array_list_size(list);
}

unsigned int array_list_capacity(struct array_list_int *list){
    return list->capacity;
}

double array_list_percent_occupied(struct array_list_int *list){
    return (double) list->size/list->capacity;
}

void array_list_destroy(struct array_list_int *list){
    free(list);
}

void print_array(struct array_list_int *list){
    for (int i = 0; i < list->size; i++){
        printf("%d ", list->a[i]);
    }
}