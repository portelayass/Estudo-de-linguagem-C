#include <stdio.h>

int main(){
    int a, b;
    printf("digite os numeros: ");
    scanf("%d %d", &a, &b);

    if((a % 2 == 0) || (b % 2 == 0)){
        printf("um dos numeros eh par");
    }else {
    printf("um deles eh impar");
    }
return 0;

}
