// Questão 1 
#include <stdio.h>
#include <stdlib.h>

int acharMaior(int X, int Y) {
    if(X > 0 && Y > 0) {
        if(X > Y) {
            return X;
        }
        else {
            return Y;
        }
    }
    else {
        printf("O valor digitado nao eh inteiro ou positivo\nEncerrando programa...\n");
        exit(1);
    }
}

int main() {
    int A, B;

    printf("Insira um valor inteiro e positivo: \n");
    scanf("%d", &A);

    printf("Insira outro valor inteiro e positivo: \n");
    scanf("%d", &B);

    printf("O maior valor eh = %d", acharMaior(A, B));

    return 0;
}