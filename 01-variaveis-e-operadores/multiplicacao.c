#include <stdio.h>

int main() {
    int v1, v2, v3, resultado;

    printf("Digite tres notas: ");
    scanf("%d %d %d", &v1, &v2, &v3);

    resultado = v1 * v2 * v3;

    printf("Resultado: %d\n", resultado);

    return 0;
}
