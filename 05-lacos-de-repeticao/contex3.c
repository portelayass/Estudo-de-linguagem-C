#include <stdio.h>

int main(){

    int num, i, resultado = 0;

    printf("digite um numero: ");
    scanf("%d", &num);

    for( i = 2; i <= num / 2; i++ ){
    if (num % i == 0){
        resultado++;
    }
}
if (resultado == 0)
    printf("%d eh um numero primo", num);
else
    printf("%d não eh um numero primo", num);
return 0;
}
