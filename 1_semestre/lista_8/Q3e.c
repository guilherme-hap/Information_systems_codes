// Questão 3 - Letra e
#include <stdio.h>

int i, j, aux;
int tamanhoC = 12;

void lerMatrizes(int *matriz, int tamanho) {
    for(i = 0; i < tamanho; i++) {
        printf("Digite o elemento %d: ", i+1);
        scanf("%d", &matriz[i]);
    }
}

void ordenarMatrizes(int *matriz, int tamanho) {
    int i, j, aux;
    for (i = 0; i < tamanho-1; i++) {
        for (j = 0; j < tamanho-i-1; j++) {
            if (matriz[j] > matriz[j+1]) {
                aux = matriz[j];
                matriz[j] = matriz[j+1];
                matriz[j+1] = aux;
            }
        }
    }
}

void somaMatrizes(int *matrizA, int *matrizB, int *matrizC) {
    for(i = 0; i < 12; i++) {
        matrizC[i] = matrizA[i] + matrizB[i];
    }
    ordenarMatrizes(matrizC, tamanhoC);
    for(i = 0; i < 12; i++) {
        printf("%d ", matrizC[i]);
    }
    printf("\n");
}

int main() {
    int matrizA[12];
    int matrizB[12];
    int matrizC[12];

    int tamanhoA = 12;
    int tamanhoB = 12;

    printf("Leitura da matriz A:\n");
    lerMatrizes(matrizA, tamanhoA);

    printf("Leitura da matriz B:\n");
    lerMatrizes(matrizB, tamanhoB);

    ordenarMatrizes(matrizA, tamanhoA);
    ordenarMatrizes(matrizB, tamanhoB);

    printf("Matriz C resultante:\n");
    somaMatrizes(matrizA, matrizB, matrizC);
}