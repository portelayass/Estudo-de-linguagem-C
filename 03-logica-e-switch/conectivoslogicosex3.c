#include <stdio.h>

int main(){
    int a,b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a ,&b);

    if(a > 10 || b > 10 ){
    printf(" um dos numeros é maior que 10");
    }else {
    printf("Nenhum é maior que 10");
    }

return 0;
}
