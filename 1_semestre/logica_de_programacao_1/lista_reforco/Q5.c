// Questão 5
#include <stdio.h>

int anoBissexto(int x) {
    int resultado;
    if(x % 4 == 0) {
        if(x % 100 == 0) {
            if(x % 400 == 0) {
                resultado = 1;
            }
            else {
                resultado = 0;
            }
        }
    }
    else {
        resultado = 0;
    }
    return resultado;
}

int main() {
    int ano;

    printf("Insira o ano que quer saber se eh bissexto: \n");
    scanf("%d", &ano);

    if(ano < 1000) {
        printf("O ano deve ter ao menos 4 digitos!\nEncerrando programa...");
    }
    else {
        if(anoBissexto(ano) == 0) {
            printf("O ano %d nao eh bissexto!", ano);
        }
        else {
            printf("O ano %d eh bissexto!", ano);
        }
    }
}