// Questão 9
#include <stdio.h>

float calculoTarifa(float X) {
    int resultado;
    if(X >= 1000 && X < 3000) {
        resultado = 20;
    }
    if(X >= 3000 && X < 5000) {
        resultado = 25;
    }
    if(X >= 5000) {
        resultado = 30;
    }
    if(X < 1000) {
        resultado = 0;
    }
    return resultado;
}

int main() {
    float saldo;

    printf("Insira o saldo para calculo da tarifa: \n");
    scanf("%f", &saldo);

    printf("De acordo com seu saldo de %.2f, sua tarifa sera reduzida em: %.2f%%.", saldo, calculoTarifa(saldo));
}