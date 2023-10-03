#include <stdio.h>
#include <math.h>

int main()
{
    int A[4], B[4], C[4][2], i, j;

    for(i=0; i<4; i++) {
        printf("Insira os valores de A: \n");
        scanf("%d", &A[i]);
    }
    for(i=0; i<4; i++) {
        printf("Insira os valores de B: \n");
        scanf("%d", &B[i]);
    }
    printf("\n");
    for(i=0; i<4; i++) {
        for(j=0; j<2; j++) {
            if(j == 0) {
                C[i][j] = A[i]*2;
            }
            if(j == 1) {
                C[i][j] = B[i]-5;
            }
        }
    }
    for(i=0; i<4; i++) {
        for(j=0; j<2; j++) {
            printf("%d\n", C[i][j]);
        }
    }
    return 0;
}