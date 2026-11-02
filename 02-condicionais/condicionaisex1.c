#include <stdio.h>

int main(){

    /*CRIE UM PROGRAMA QUE FAÇA A LEITURA DE DOIS NUMEROS E FALE SE A SOMA DELE É MAIOR OU MENOR QUE 10*/
    int num1, num2, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("O valor de %d + %d eh igual a: %d\n", num1, num2, soma);

    if (soma < 10){
        printf("A soma dos valores eh menor que 10\n");
        }else if( soma == 10){
        printf(" o valor eh igual a 10");
        }else {
        printf ("A soma dos valores eh maior que 10\n");
        }

return 0;
}

