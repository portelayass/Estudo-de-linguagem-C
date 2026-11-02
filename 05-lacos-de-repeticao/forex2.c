#include<stdio.h>

int main(){
    int i, tabuada;
    printf("digite um numero: ");
    scanf("%d", &tabuada);


    for(i = 1; i <= 10; i++){
        printf("%d x %d = % d \n", tabuada, i, tabuada * i);
    }

return 0;

}
