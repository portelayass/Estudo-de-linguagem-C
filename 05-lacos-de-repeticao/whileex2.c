#include<stdio.h>
#include<stdlib.h>

int main(){

int i = 10;
int max;

printf("digite um valor maximo: ");
scanf("%d", &max);
while ( i <= max){

    if ( i % 2 == 0 ) {

        printf("%d \n", i);
    }
    i = i+1;

}

return 0;
}


