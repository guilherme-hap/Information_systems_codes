// Questão 2
#include <stdio.h>
#include <stdlib.h>

void acharMenor(int X, int Y, int Z) {
    if(X > 0 && Y > 0 && Z > 0) {
        if(X < Y && X < Z) 
            printf("O menor valor eh o de A = %d", X);
        else if(Y < X && Y < Z)
            printf("O menor valor eh o de B = %d", Y);
        else if(Z < X && Z < Y)
            printf("O menor valor eh o de C = %d", Z);
        else if(X == Y && X != Z)
            printf("O valor de A eh igual ao valor de B e sao menores que %d (valor de C), logo os menores valores sao A = %d e B = %d", Z, X, Y);
        else if(X == Z && X != Y)
            printf("O valor de A eh igual ao valor de C e sao menores que %d (valor de B), logo os menores valores sao A = %d e C = %d", Y, X, Z);
        else if(Y == Z && Y != X)
            printf("O valor de B eh igual ao valor de C e sao menores que %d (valor de B), logo os menores valores sao B = %d e C = %d", X, Y, Z);
        else if(X == Y && X == Z)
            printf("Os valores A, B e C sao iguais, logo, os menores valores sao %d, %d e %d", X, Y, Z);
        
    }
    else {
        printf("O valor digitado nao eh inteiro ou positivo\nEncerrando programa...\n");
        exit(1);
    }
}

int main() {
    int A, B, C;

    printf("Insira um valor inteiro e positivo (A): \n");
    scanf("%d", &A);

    printf("Insira outro valor inteiro e positivo (B): \n");
    scanf("%d", &B);

    printf("Insira mais um valor inteiro e positivo (C): \n");
    scanf("%d", &C);

    acharMenor(A, B, C);

    return 0;
}