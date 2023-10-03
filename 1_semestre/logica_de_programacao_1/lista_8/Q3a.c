// Questão 3 - Letra a
#include <stdio.h>


int soma(int *ptrN) {
    int i;
    int soma = 0;
    for(i=0; i<=*ptrN; i++) {
        soma += i;
    }

    return soma;
}

int main(void) {
    int limite;
    int *ptrLimite = &limite;
    printf("Insira o limite da soma que deve ser feita: \n");
    scanf("%d", &limite);

    printf("O valor da soma dos %d numeros eh = %d", limite, soma(ptrLimite));
}