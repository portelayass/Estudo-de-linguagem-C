#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));

    int max = 6;
    int min = 1;

    int d1 = (rand()% ( max - min + 1 )) + min;
    int d2 = (rand()% ( max - min + 1 )) + min;
    int d3 = (rand()% ( max - min + 1 )) + min;

    int soma = d1 + d2 + d3;

    printf("Valores \n Dado 1:  %d \n Dado 2: %d\n Dado 3: %d \n", d1, d2, d3);
     printf(" A soma dos lados eh %d\n", soma);
    return 0;
}
