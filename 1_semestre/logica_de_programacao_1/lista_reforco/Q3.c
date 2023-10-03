// Questão 3
#include <stdio.h>
#include <math.h>

void calculoPotencia(int vetor[]) {
    int i;
    for(i=0; i<3; i++) {
        vetor[i] = pow(vetor[i], 2);
    }
}

int main() {
    int vet[3];
    int i;
    
    for(i=0; i<3; i++) {
        printf("Insira o valor que deseja fazer o quadrado: \n");
        scanf("%d", &vet[i]);
    }

    calculoPotencia(vet);

    if(vet[2] >= 1000) {
        printf("O terceiro numero resultou num quadrado maior que mil!\nEncerrando programa...\n");
        return 0;
    }
    else {
        for(i=0; i<3; i++)
            printf("Os valores do quadrado do %d numero eh: %d\n", i+1, vet[i]);
    }
}