#include <stdio.h>
//arrasando dnv nas condicionais
int main(){

 int a, b;

 printf("digite o valor de a :");
 scanf("%d", &a);

 printf("digite o valor de b :");
 scanf("%d", &b);

 if ( a > b){
    printf(" A eh maior q b ");
 } else if ( a < b) {
 printf("A é menor q b ");
 } else {
     printf("Os valores de a e b sao iguais");
 }
 return 0;
}
