// Questão 5 - Sala
#include <stdio.h>

int main()
{
    int A[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int B[30] = {21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int C[50], i, j, x;

    for(i=0; i<20; i++) {
        C[i]=A[i];
    }
    for(j=0; j<30; j++) {
        C[j+20]=B[j];
    }
    for(x=0; x<50; x++) {
        printf("%d ", C[x]);
    }
}