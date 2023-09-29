// Questão 2 - Letra d
#include <stdio.h>
#include <math.h>

int potencia(int x, int y) {
    int resultado;
    resultado = pow(x, y);
    return resultado;
}

int main() {
    int base, expoente;
    printf("Informe a base da portencia: \n");
    scanf("%d", &base);
    printf("Informe o expoente da portencia: \n");
    scanf("%d", &expoente);

    printf("O resultado eh = %d.\n", potencia(base, expoente));
}