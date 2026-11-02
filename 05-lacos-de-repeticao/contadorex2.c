#include <stdio.h>

int main(){
    int i = 10;
     printf("\n--- Números pares com WHILE ---\n");
    while ( i <= 20){
       if (i % 2 == 0);{
        printf("%d \n", i);
        }
        i++;
    }
     printf("\n--- Números pares com DO - WHILE ---\n");
    i = 10;
    do{
        if(i % 2 == 0){
         printf("%d \n", i);
        }
        i++;
    } while (i <=20);

 printf("\n--- Números pares com FOR ---\n");

for(int i = 10; i <= 20; i++){
 if(i % 2 == 0){
    printf("%d\n", i);
    }
 }
return 0;

}
