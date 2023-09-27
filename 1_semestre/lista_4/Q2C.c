// Questão 2 - Casa
#include <stdio.h>

int main()
{
    int RA[9], RAN[9], i; // RAN é o RA Novo
    for(i=0; i<9; i++) {
        printf("Insira os 9 digitos do RA: ");
        scanf("%d", &RA[i]);
    }
    for(i=0; i<9; i++) {
        RAN[i] = RA[i];
        RAN[8] = RA[5];
        RAN[7] = RA[6];
        RAN[6] = RA[7];
        RAN[5] = RA[8];
        printf("%d", RAN[i]);
    }
    return 0;
}