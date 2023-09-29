#include <stdio.h>

int i;

void lerVetores(int *vetor, int tamanhoVet) {
    for(i = 0; i < tamanhoVet; ++i) {
        printf("Digite o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

void juntarVetores(const int *vetorA, int tamanhoVetA, const int *vetorB, int tamanhoVetB, int *vetorC) {
    for(i = 0; i < tamanhoVetA; ++i) {
        vetorC[i] = vetorA[i];
    }
    for(i = 0; i < tamanhoVetB; ++i) {
        vetorC[i + tamanhoVetA] = vetorB[i];
    }
}

void exibicaoVetor(const int *matriz, int tamanhoVet) {
    for(i = 0; i < tamanhoVet; ++i) {
        printf("%d ", matriz[i]);
    }
    printf("\n");
}

int main() {
    int tamanhoVetA = 30;
    int tamanhoVetB = 30;
    int tamanhoVetC = tamanhoVetA + tamanhoVetB;

    int vetorA[tamanhoVetA];
    int vetorB[tamanhoVetB];
    int vetorC[tamanhoVetA + tamanhoVetB];

    printf("Leitura da matriz A:\n");
    lerVetores(vetorA, tamanhoVetA);

    printf("Leitura da matriz B:\n");
    lerVetores(vetorB, tamanhoVetB);

    juntarVetores(vetorA, tamanhoVetA, vetorB, tamanhoVetB, vetorC);

    printf("Matriz C resultante:\n");
    exibicaoVetor(vetorC, tamanhoVetC);

    return 0;
}