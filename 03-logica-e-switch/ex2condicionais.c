#include <stdio.h>

int main(){
    // resto de divisão
    printf("_____Descobrindo se um numero eh par_____\n");
    int numero;
    printf("digite o numero desejado: ");
    scanf("%d", &numero);

     if(numero % 2 == 0){
        printf("Par");
    }else {
    printf("Impar");
    }
return 0;

}
