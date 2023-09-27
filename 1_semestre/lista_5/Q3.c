// Questão 3
#include <stdio.h>

int main() {
    int A[15], B[15], i, c, aux, n, fat;
    for(i=0; i<15; i++) {
        printf("Insira os valores em qualquer ordem: \n");
        scanf("%d", &A[i]);
    }
    do {
        c = 0;
        for(i=0; i<15; i++) {
            fat = 1;
            for(n=A[i]; n>1; n--) {
                fat=fat*n;
            }
            B[i]=fat;
            if(B[i+1]>B[i]) {
                aux = B[i];
                B[i] = B[i+1];
                B[i+1] = aux;
                c = i;
            }
        }
    } while (c != 0);
    for(i=0; i<15; i++) {
        printf("%d\n", B[i]);
    }
}