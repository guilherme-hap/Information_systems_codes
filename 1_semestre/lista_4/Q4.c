// Questão 4 - Sala
#include <stdio.h>

int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int B[5] = {6, 7, 8, 9, 10};
    int C[10], i, j, x;

    for(i=0; i<5; i++) {
        C[i]=A[i];
    }
    for(j=0; j<5; j++) {
        C[j+5]=B[j];
    }
    for(x=0; x<10; x++) {
        printf("%d ", C[x]);
    }
}