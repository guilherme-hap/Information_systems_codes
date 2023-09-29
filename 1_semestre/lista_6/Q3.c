#include <stdio.h>
#include <math.h>

int main()
{
    int A[10], B[10][3], i, j, x, fat;

    for(i=0; i<10; i++) {
        printf("Insira os valores de A: \n");
        scanf("%d", &A[i]);
    }
    printf("\n");
    for(i=0; i<10; i++) {
        for(j=0; j<3; j++) {
            if(j == 0) {
                B[i][j] = A[i]+5;
            }
            if(j == 1) {
                fat = 1;
                for(x=A[i]; x>1; --x) {
                    fat = fat*x;
                }
                B[i][j] = fat;
            }
            if(j == 2) {
                B[i][j] = pow(A[i], 2);
            }
        }
    }

    for(i=0; i<10; i++) {
        for(j=0; j<3; j++) {
            printf("%d\n", B[i][j]);
        }
    }
    return 0;
}