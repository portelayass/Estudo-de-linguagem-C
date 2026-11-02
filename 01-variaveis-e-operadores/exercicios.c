#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
     // Define o idioma para aceitar acentuação (opcional, já que incluiu locale.h)
     setlocale(LC_ALL, "Portuguese");

     float n1, n2, resultado;

     // Removido o %f do printf, pois a nota ainda não foi digitada
     printf("Insira a primeira nota:\n");
     scanf("%f", &n1);

     printf("Insira a segunda nota:\n");
     // Corrigido para salvar em &n2
     scanf("%f", &n2);

     // Adicionado parênteses para garantir que a soma ocorra antes da divisão
     resultado = (n1 + n2) / 2;

     printf("A média é: %.2f\n", resultado); // %.2f limita para duas casas decimais

     return 0;
}
