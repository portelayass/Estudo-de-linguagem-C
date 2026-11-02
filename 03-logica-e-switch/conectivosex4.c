#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    if ((a > 0 && a < 10) &&
        (b > 0 && b < 10) &&
        ((a % 2 == 0) || (b % 2 == 0))) {

        printf("Os numeros estao no intervalo de 0 a 10 e pelo menos um e par.");

    } else {
        printf("Erro");
    }
    return 0;


    /* outra forma é somando as variaveis e vendo
    se o valor esta entre o intervalo descrito */
}
