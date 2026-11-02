#include<stdio.h>
#include<stdlib.h>

int main(){

    int nota1, nota2, resultado;
    printf("digite a primeira nota:\n");
    scanf("%d", &nota1);

    printf("digite a segunda nota:\n");
    scanf("%d", &nota2);

    printf("A diferenca entre os dois valores eh:\n%d ", abs(nota1 - nota2));

return 0;
}
