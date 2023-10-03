// Questão 6 - Sala
#include <stdio.h>
#include <math.h>

int main() {
    int A[8], B[8], i;
    for(i=0; i<8; i++) {
        printf("Digite os valores para fazer ao quadrado:  \n");
        scanf("%d", &A[i]);
    }
    printf("\n");
    for(i=0; i<8; i++) {
        B[i]=pow(A[i], 2);
        printf("%d \n", B[i]);
    }
}