#include <stdio.h>
#include <math.h>

int main()
{
    int A[7], B[7], C[7][2], i, j;

    for(i=0; i<7; i++) {
        printf("Insira os valores de A: \n");
        scanf("%d", &A[i]);
    }
    for(i=0; i<7; i++) {
        printf("Insira os valores de B: \n");
        scanf("%d", &B[i]);
    }
    printf("\n");

    for(i=0; i<7; i++) {
        for(j=0; j<2; j++) {
            if(j == 0) {
                C[i][j] = A[i];
            }
            if(j == 1) {
                C[i][j] = B[i];
            }
        }
    }

    for(i=0; i<7; i++) {
        for(j=0; j<2; j++) {
            printf("%d ", C[i][j]);
        }
    }
    return 0;
}