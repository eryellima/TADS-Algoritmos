#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// gerador de N, onde N é a a quantidade de números a serem gerados
int main(int argc, char **argv){
    int num, i , n;
    n = atoi(argv[1]);

    printf("%d\n", n);

    srand(time(0)%10000);

    for(i = 0; i < n; ++i){
        num = (rand()%1000000*3);
        
        printf("%d ", num);
    }

    printf("\n");

    return 0;
}