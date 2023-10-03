#include <stdio.h>

int main() {
    int A[5][3], B[5][3], C[5][3], i, j;
    for(i=0; i<5; i++) {
        for(j=0; j<3; j++) {
            printf("Insira os valores de A: \n");
            scanf("%d", &A[i][j]);
            printf("Insira os valores de B: \n");
            scanf("%d", &B[i][j]);
        }
    }
    printf("\n");
    for(i=0; i<5; i++) {
        for(j=0; j<3; j++) {
            C[i][j] = A[i][j]+B[i][j];
            printf("%d\n", C[i][j]);
        }
    }
}