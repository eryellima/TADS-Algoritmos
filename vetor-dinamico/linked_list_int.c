#include <stdlib.h>
#include <stdio.h>
#include "linked_list_int.h"

struct list_int_node{
    int value;
    struct list_int_node *prev;
    struct list_int_node *next;
};

struct linked_list_int{
    struct list_int_node *first;
    struct list_int_node *last;
    int size;
};


struct linked_list_int *linked_list_create(){
    struct linked_list_int *new_list = (struct linked_list_int *)malloc(sizeof(struct linked_list_int));
    if (new_list == 0)
        return 0;
    new_list->size = 0;
    return new_list;
}

int linked_list_get(struct linked_list_int *lista, int index){
    node *current = lista->last;
    int tam = lista->size;

    while (tam != 0){
        if (index == tam-1)
            return current->value;
        current = current->prev;
        tam--;
    }
    return 0; 
}

void linked_list_push_back(struct linked_list_int *lista, int valor){
    node *new_node = (node *)malloc(sizeof(node));
    if (lista->size == 0){
        new_node->value = valor;
        new_node->prev = 0;
        lista->first = new_node;
        lista->last = new_node;
        lista->size = lista->size + 1;
    }
    else if (lista->size == 1){
        new_node->value = valor;
        new_node->prev = lista->first;

        lista->first->next = new_node;
        lista->last = new_node;
        lista->size = lista->size + 1;
    }
    else{
        new_node->value = valor;
        new_node->prev = lista->last;

        lista->last->next = new_node;
        lista->last = new_node;
        lista->size = lista->size + 1;
    }
}

unsigned int linked_list_pop_back(struct linked_list_int *lista){   
    node *aux = lista->last->prev; 
    free(lista->last);
    lista->last = aux;              
    lista->size--;
    return linked_list_size(lista);
}

unsigned int linked_list_size(struct linked_list_int *lista){
    return lista->size;
}

int linked_list_find(struct linked_list_int *lista, int element){
    node *current = lista->last;
    int tam = lista->size;
    while (tam != 0){
        if (current->value == element) {
            return tam-1;
        }
        current = current->prev;
        tam--;
    }
    return -1;
}

unsigned int linked_list_insert_at(struct linked_list_int *lista, int index, int valor){
    node *current = lista->last;
    node *aux;
    if (index == linked_list_size(lista)){
        linked_list_push_back(lista, valor);
        return linked_list_size(lista);
    }
    else if (index >= 0 && index < linked_list_size(lista)){
        for (int i = lista->size; i > index + 1; i--){
            current = current->prev;
        }
        node *new_node = (node *)malloc(sizeof(node));
        aux = current;
        if (index == 0){
            new_node->next = aux;
            new_node->prev = 0;
            new_node->value = valor;
            aux->prev = new_node;
            lista->first = new_node;
            lista->size++;
            return linked_list_size(lista);
        }
        new_node->next = aux;
        new_node->value = valor;
        current = current->prev;
        current->next = new_node;
        aux->prev = new_node;
        lista->size++;
        return linked_list_size(lista);
    }
    return -1;
}

int linked_list_remove_from(struct linked_list_int *lista, int index){
    node *current = lista->last;
    node *aux_next;
    node *aux_prev;
    int tam = lista->size;
    while (tam != 0){
        if (index == tam - 1){
            if (index == 0){
                aux_next = current->next;
                aux_next->prev = 0;
                lista->first = aux_next;
                free(current);
                lista->size--;
                return linked_list_size(lista);
            }   
            aux_next = current->next;
            aux_prev = current->prev;
            aux_next->prev = aux_prev;
            aux_prev->next = aux_next; 
            free(current);
            lista->size--;
            return linked_list_size(lista);
        }
        current = current->prev;
        tam--;
    }
    return linked_list_size(lista);
}

unsigned int linked_list_capacity(struct linked_list_int * lista){
    int tam = lista->size;
    int capacity = 0;
    while (tam != 0){
        capacity = capacity + 1;
        tam--;
    }
    return capacity;
}

double linked_list_percent_occupied(struct linked_list_int * lista){
    int capacity = linked_list_capacity(lista);
    int size = linked_list_size(lista);
    double percent = (double)size/(double)capacity;
    return percent;
}

void linked_list_destroy(struct linked_list_int* list){
    free(list);
}

void print_list(struct linked_list_int *lista){
    node *current = lista->first;
    int tam = lista->size;
    while (tam != 0){
        printf("%d -> ", current->value);
        current = current->next;
        tam--;
    }
    printf("NULL\n");
}