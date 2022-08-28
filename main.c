#include <stdio.h>

int zero(int valor[5]){
    int *ptr;
    ptr = valor;
    int alteracoes = 0;
    for (int i = 1; i < 6; ++i) {
        if (ptr[i] < 10){
            ptr[i] = 0;
            alteracoes++;
        }
    }
    return alteracoes;
}
int main() {
    int valores[5];
    int *ptr;
    for (int i = 1; i < 6; ++i) {
        printf("digite o valor de número %d \n", i);
        scanf("%d", &valores[i]);
    }
    int alterados = zero(valores);

    printf("foram alteradas %d posicoes", alterados);

    for (int i = 1; i < 6; ++i) {
        printf("\n%d", valores[i]);
    }
    return 0;
}