#include<stdio.h>
#include<stdlib.h>
#inlcude<locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    int nota1 = -32, nota2 = 10;

    int soma = nota1 + nota2;

    int resultado = abs(soma);

    print("A soma é \n%d", soma);
    print ("O valor absoluto é \n%d", resultado);

return 0;
}
