#include <stdio.h>
// Questão 3 (Lista 1 - CASA) - Algoritmo azulejos.

int main()
{
    float Q, AP, LP, AA, LA;
    printf("Insira a altura da parede: \n");
    scanf("%f", &AP);
    printf("Insira a largura da parede: \n");
    scanf("%f", &LP);
    printf("Insira a altura do azulejo: \n");
    scanf("%f", &AA);
    printf("Insira a largura do azulejo: \n");
    scanf("%f", &LA);
    
    Q = (AP*LP)/(AA*LA);
    printf("A quantidade de azulejos necessaria: %.2f\n", Q);
    return 0;
}