#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "array_list_int.h"
#include "linked_list_int.h"

int main(){
  /* Remova os comentarios "barra asterisco asterisco barra" do teste que quer fazer */

  /* Inserção de elementos no vetor dinamico */
  /*
    clock_t inicio, fim;
    int n;

    struct array_list_int *list = array_list_create();

    scanf("%d", &n);

    inicio = clock();

    for (int i = 0; i < n; ++i){
      array_list_push_back(list, i);
    }
    fim = clock();

    print_array(list);
    printf("\n");
    printf("Tempo de processamento: %.3lfms\n",(((double)fim-(double)inicio)/CLOCKS_PER_SEC)*1000);
  */

  /* Inserção de elementos na lista ligada */
  /*
    clock_t inicio, fim;
    int n;

    struct linked_list_int *list = linked_list_create();

    scanf("%d", &n);

    inicio = clock();

    for (int i = 0; i < n; ++i){
      linked_list_push_back(list, i);
    }
    fim = clock();

    print_list(list);
    printf("\n");
    printf("Tempo de processamento: %.3lfms\n",(((double)fim-(double)inicio)/CLOCKS_PER_SEC)*1000);
  */


  /* Conjunto de busca de elementos vetor dinamico */
  /*
    clock_t inicio, fim;
    int n, element;

    struct array_list_int *list = array_list_create();

    scanf("%d", &n);
    scanf("%d", &element);

    // adicionando o tamnho do array
    for (int i = 0; i < n; ++i){
      array_list_push_back(list, i);
    }
    
    inicio = clock();

    array_list_find(list, element);

    fim = clock();

    printf("Tempo de processamento: %.3lfms\n",(((double)fim - (double)inicio)/CLOCKS_PER_SEC)*1000);
  */

   /* Conjunto de busca de elementos na lista ligada */
  /*
    clock_t inicio, fim;
    int n, element;

    struct linked_list_int *list = linked_list_create();

    scanf("%d", &n);
    scanf("%d", &element);

    // adicionando o tamnho do array
    for (int i = 0; i < n; ++i){
      linked_list_push_back(list, i);
    }
    
    inicio = clock();

    linked_list_find(list, element);

    fim = clock();

    printf("Tempo de processamento: %.3lfms\n",(((double)fim - (double)inicio)/CLOCKS_PER_SEC)*1000);
  */


  /* Conjunto de remoção no indice 0 de elementos em vetor dinamico */
  /*
    clock_t inicio, fim;
    int n, index;

    struct array_list_int *list = array_list_create();

    scanf("%d", &n);

    for (int i = 0; i < n; ++i){
      array_list_push_back(list, i);
    }
   
    index = 0;
    inicio = clock();
   
    array_list_remove_from(list, index);
   
    fim = clock();
  
    printf("Tempo de processamento: %.3lfms\n",(((double)fim-(double)inicio)/CLOCKS_PER_SEC)*1000);
  */

  /* Conjunto de remoção no indice 0 de elementos na lista ligada */
  /*
    clock_t inicio, fim;
    int n, index;

    struct linked_list_int *list = linked_list_create();

    scanf("%d", &n);

    for (int i = 0; i < n; ++i){
      linked_list_push_back(list, i);
    }
   
    index = 0;
    inicio = clock();
   
    linked_list_remove_from(list, index);
   
    fim = clock();
  
    printf("Tempo de processamento: %.3lfms\n",(((double)fim-(double)inicio)/CLOCKS_PER_SEC)*1000);
  */


  /* Conjunto de remoção no final da lista em vetor dinamico */
  /*
    clock_t inicio, fim;
    int n;

    struct array_list_int *list = array_list_create();

    scanf("%d", &n);

    for (int i = 0; i < n; ++i){
      array_list_push_back(list, i);
    }
   
    inicio = clock();
   
    array_list_pop_back(list);
   
    fim = clock();
  
    printf("Tempo de processamento: %.3lfms\n",(((double)fim-(double)inicio)/CLOCKS_PER_SEC)*1000);
  */

  /* Conjunto de remoção no final da lista na lista ligada */
  /*
    clock_t inicio, fim;
    int n;

    struct linked_list_int *list = linked_list_create();

    scanf("%d", &n);

    for (int i = 0; i < n; ++i){
      linked_list_push_back(list, i);
    }
   
    inicio = clock();
   
    linked_list_pop_back(list);
   
    fim = clock();
  
    printf("Tempo de processamento: %.3lfms\n",(((double)fim-(double)inicio)/CLOCKS_PER_SEC)*1000);
  */


  /* Conjunto de inserções, buscar e remover no vetor dinamico */
  /*
    clock_t inicio, fim;
    int n, element;

    struct array_list_int *list = array_list_create();

    scanf("%d", &n);
    scanf("%d", &element);

    // adicionando o tamnho do array
    for (int i = 0; i < n; ++i){
      array_list_push_back(list, i);
    }
    
    inicio = clock();

    array_list_find(list, element);
    array_list_remove_from(list, element);

    fim = clock();

    printf("Tempo de processamento: %.3lfms\n",(((double)fim - (double)inicio)/CLOCKS_PER_SEC)*1000);
  */

  /* Conjunto de inserções, buscar e remover na lista ligada */
  /*
    clock_t inicio, fim;
    int n, element;

    struct linked_list_int *list = linked_list_create();

    scanf("%d", &n);
    scanf("%d", &element);

    // adicionando o tamnho do array
    for (int i = 0; i < n; ++i){
      linked_list_push_back(list, i);
    }
    
    inicio = clock();

    linked_list_find(list, element);
    linked_list_remove_from(list, element);

    fim = clock();
    printf("Tempo de processamento: %.3lfms\n",(((double)fim - (double)inicio)/CLOCKS_PER_SEC)*1000);

    linked_list_destroy(list);
  */

    return 0;
}