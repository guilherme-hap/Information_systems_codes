// Questão 9 - Sala
#include <stdio.h>

int main()
{
    int X;
    printf("Insira o codigo do curso: \n");
    scanf("%d", &X);
    
    switch (X)
    {
    case 1: printf("Engenharia");
        break;
    case 2: printf("Edificacoes");
        break;
    case 3: printf("Sistemas Eletricos");
        break;
    case 4: printf("Turismo");
        break;
    case 5: printf("Analise de sistemas");
        break;
    default: printf("Codigo invalido!");
        break;
    }
}