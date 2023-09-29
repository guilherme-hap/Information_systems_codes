// Questão 2 - Letra e
#include <stdio.h>

int A[12], B[12], C[12], i, j, aux;

void leitura() {
    for(i=0; i<12; i++) {
        printf("Insira os valores da primeira matriz: \n");
        scanf("%d", &A[i]);
    }
    for(i=0; i<12; i++) {
        printf("Insira os valores da segunda matriz: \n");
        scanf("%d", &B[i]);
    }
}

void sequencia() {
    leitura();
    for(i=0; i<12; i++) {
        for(j=i; j>0; j--) {
            if(A[j]>A[j-1]) {
                aux = A[j];
                A[j] = A[j-1];
                A[j-1] = aux;
            }
        }
    }
    for(i=0; i<12; i++) {
        for(j=i; j>0; j--) {
            if(B[j]>B[j-1]) {
                aux = B[j];
                B[j] = B[j-1];
                B[j-1] = aux;
            }
        }
    }
}

void soma_sequencia() {
    sequencia();
    for(i=0; i<12; i++) {
        C[i] = A[i] + B[i];
    }
    for(i=0; i<12; i++) {
        for(j=i; j>0; j--) {
            if(C[j]<C[j-1]) {
                aux = C[j];
                C[j] = C[j-1];
                C[j-1] = aux;
            }
        }
    }
    for(i=0; i<12; i++) {
        printf("%d ", C[i]);
    }
}

int main() {
    soma_sequencia();
}



