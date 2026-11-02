#include<stdio.h>

int main (){

    int num;
    printf("Digite um numero para saber se ele esta entre 0 e 10:\n");
    scanf("%d", &num);
    if (num > 0 && num< 10){
        printf (" O numero esta no intervalo de 0 e 10");
    } else {
        printf( "Erro");
    }
return 0;
}
