// Questão 2 - Letra c
#include <stdio.h>

int calc_prestacao(int X, int Y, int Z) {
    int prest;
    prest = X+(X*(Y/100)*Z);
    return prest;
}

int main() {
    int valor, taxa, tempo;
    printf("Insira o valor da prestacao: \n");
    scanf("%d", &valor);
    printf("Insira a taxa da prestacao: \n");
    scanf("%d", &taxa);
    printf("Insira o tempo da prestacao: \n");
    scanf("%d", &tempo);

    printf("O valor atualizado da prestacao eh: %d\n", calc_prestacao(valor, taxa, tempo));
}