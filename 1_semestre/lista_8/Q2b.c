// Questão 2 - Letra b
#include <stdio.h>

int A[30], B[30], C[60], i;

void leitura() {
    for(i=0; i<30; i++) {
        printf("Insira os valores da primeira matriz: \n");
        scanf("%d", &A[i]);
    }
    for(i=0; i<30; i++) {
        printf("Insira os valores da segunda matriz: \n");
        scanf("%d", &B[i]);
    }
}

void juncao() {
    leitura();
    for(i=0; i<30; i++) {
        C[i] = A[i];
        C[i+30] = B[i];
    }
}

void exibicao() {
    juncao();
    for(i=0; i<60; i++) {
        printf("%d ", C[i]);
    }
}

int main() {
    exibicao();
}