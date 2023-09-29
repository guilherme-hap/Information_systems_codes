// Questão 2 - Letra a
#include <stdio.h>

int soma(int N) {
    int soma = 0, i;
    for(i=0; i<=N; i++) {
        soma = soma+i;
    }
    return soma;
}

int main() {
    int N;

    printf("Insira ate que numero inteiro a soma deve ser feita: \n");
    scanf("%d", &N);

    printf("O valor da soma eh: %d\n", soma(N));
}