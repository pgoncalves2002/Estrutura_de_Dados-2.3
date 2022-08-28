#include <stdio.h>
#include "stdlib.h"
int zero(int valor){
    if(valor < 10){
        return 0;
    }
};
int main() {
    int valores[5];
    int *ptr;
    int contador = 0;
    for (int i = 1; i < 6; ++i) {
        printf("digite o valor de número %d \n", i);
        scanf("%d", &valores[i]);
    }
    ptr = valores;
    for (int i = 1; i < 6; ++i) {
        zero(valores[i]);
        if(zero(valores[i]) == 0){
            contador++;
        }
    }
    printf("%d", contador);
    return 0;
}