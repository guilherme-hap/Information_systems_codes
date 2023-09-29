// Questão 3 - Letra d
#include <stdio.h>
#include <math.h>

int potencia(int *ptrX, int *ptrY) {
    int resultado;
    resultado = pow(*ptrX, *ptrY);
    return resultado;
}

int main() {
    int base, expoente;
    int *ptrBase = &base;
    int *ptrExpoente = &expoente;
    printf("Informe a base da portencia: \n");
    scanf("%d", &base);
    printf("Informe o expoente da portencia: \n");
    scanf("%d", &expoente);

    printf("O resultado eh = %d.\n", potencia(ptrBase, ptrExpoente));
}