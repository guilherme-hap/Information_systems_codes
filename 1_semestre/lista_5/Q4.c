// Questão 4
#include <stdio.h>

int main() {
    int A[12], B[12], C[12], i, j, c, aux;

    for(i=0; i<12; i++) {
       printf("Insira os valores de A em qualquer ordem: \n");
       scanf("%d", &A[i]);
    }

    do {
        c = 0;
        for(i=0; i<12; i++) {
            if(A[i]>A[i+1]) {
                aux = A[i];
                A[i] = A[i+1];
                A[i+1] = aux;
                c = i;
            }
        }
    } while (c != 0);
    printf("\n");
    for(i=0; i<12; i++) {
        printf("Insira os valores de B em qualquer ordem: \n");
        scanf("%d", &B[i]);
    }
    for(i=0; i<12; i++) {
        for(j=i; j>0; j--) {
            if(B[j-1]>B[j]) {
                aux = B[j];
                B[j] = B[j-1];
                B[j-1] = aux;
            }
        }
    }

    for(i=0; i<12; i++) {
        C[i] = A[i]+B[i];
    }
    
    for(i=0; i<12; i++) {
        for(j=i; j>0; j--) {
            if(C[j-1]>C[j]) {
                aux = C[j];
                C[j] = C[j-1];
                C[j-1] = aux;
            }
        }
    }
    printf("\n");
    for(i=0; i<12; i++) {
        printf("%d\n", C[i]);
    }
}