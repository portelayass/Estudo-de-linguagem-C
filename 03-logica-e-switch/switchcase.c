#include <stdio.h>
int main()
{
    /*programa de calculadora que le dois valores e
     mostra opção de somar ou subtrair*/

    int a,b,opcao, resultado;
    printf("digite dois numeros: \n ");
    scanf("%d %d", &a, &b);

    printf("1 - somar:           \n ");
    printf("2 - subtrair:        \n ");
    printf("escolha uma opcao:    \n");
    scanf("%d",&opcao);
        switch(opcao)
    {
    case 1:
            resultado = a +b;
        break;
        case 2:
        resultado = a - b;
        break;
        default:
        printf("Opção invalida \n");
        break;
    }
    printf("resultado: %d", resultado);


    return 0;
}
