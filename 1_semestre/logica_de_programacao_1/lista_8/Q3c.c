// Questão 3 - Letra c
#include <stdio.h>

int calc_prestacao(int *pV, int *pTa, int *pTe) {
    int prest;
    prest = *pV+(*pV*(*pTa/100)*(*pTe));
    
    return prest;
}

int main() {
    int valor, taxa, tempo;
    int *ptrValor = &valor;
    int *ptrTaxa = &taxa;
    int *ptrTempo = &tempo;
    printf("Insira o valor da prestacao: \n");
    scanf("%d", &valor);
    printf("Insira a taxa da prestacao: \n");
    scanf("%d", &taxa);
    printf("Insira o tempo da prestacao: \n");
    scanf("%d", &tempo);

    printf("O valor atualizado da prestacao eh: %d\n", calc_prestacao(ptrValor, ptrTaxa, ptrTempo));
    return 0;
}