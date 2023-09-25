#include <stdio.h>
// Questão 3 (CASA) - Algoritmo arredondamento.

int main()
{
    float N; //Nota.
    int NA; //Nota Arredondada.
    printf("Insira a nota do aluno: \n");
    scanf("%f", &N);

    if (N>=0 && N<=10) {
        NA = N*10;
        if (NA % 10 > 5) {
            NA = NA/10+1;
            printf("Nota final arredondada: %i", NA);
        }
        else if (NA % 10 <= 5) {
            NA = NA/10;
            printf("Nota final arredondada: %i", NA);
        }
    }
    else {
        printf("Nota invalida!");
    }
    return 0;
}