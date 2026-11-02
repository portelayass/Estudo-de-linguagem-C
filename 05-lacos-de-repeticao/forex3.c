#include<stdio.h>

int main(){
    int i, inicial, valorFinal, passos;

    printf("digite um valor inicial: ");
    scanf("%d", &inicial);
    printf("digite um valor final: ");
    scanf("%d", &valorFinal);
    printf("digite um n de passos: ");
    scanf("%d", &passos);

    for(i = inicial; i <= valorFinal; i = i + passos){

      printf("%d\n", i);
    }

return 0;

}
