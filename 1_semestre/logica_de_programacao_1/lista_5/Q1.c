// Questão 1
#include <stdio.h>

int main() {
    int vet[12], c, i, aux;

    for(i=0; i<12; i++) {
       printf("Insira os valores em qualquer ordem: \n");
       scanf("%d", &vet[i]);
    }

    do {
        c = 0;
        for(i=0; i<12; i++) {
            if(vet[i]<vet[i+1]) {
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
                c = i;
            }
        }
    } while (c != 0);

    for(i=0; i<12; i++) {
        printf("%d\n", vet[i]);
    }
    return 0;
}