// Questão 6
#include <stdio.h>
#include <math.h>

int determinarRetangulo(int x, int y, int z) {
    int resultado;

    if(pow(x, 2) == pow(y, 2) + pow(z, 2)) {
        resultado = 1;
    }
    else {
        resultado = 0;
    }

    return resultado;
}

int main() {
    int hip, cat1, cat2;

    printf("Insira o valor da hipotenusa do retangulo: \n");
    scanf("%d", &hip);
    printf("Insira o valor do 1 cateto do retangulo: \n");
    scanf("%d", &cat1);
    printf("Insira o valor do 2 cateto do retangulo: \n");
    scanf("%d", &cat2);


    if(determinarRetangulo(hip, cat1, cat2) == 0) {
        printf("O triangulo nao eh retangulo\n");
    }
    else {
        printf("O triangulo eh retangulo\n");
    }

    return 0;
}