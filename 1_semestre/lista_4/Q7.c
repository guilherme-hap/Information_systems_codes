// Questão 7 - Sala
#include <stdio.h>

int main()
{
    int A[10], B[10], i;
    for(i=0; i<10; i++) {
        printf("Entre com os valores: \n");
        scanf("%d", &A[i]);
    }
    printf("\n");
    for(i=9; i>-1; i--) {
       B[i]=A[i];
       printf("%d\n", B[i]);
    }
}