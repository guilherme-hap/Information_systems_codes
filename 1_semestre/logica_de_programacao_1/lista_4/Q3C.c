// Questão 3 - Casa
#include <stdio.h>

int main()
{
    int RA[9], RAN[9], i;
    for(i=0; i<9; i++) {
        printf("Insira os 9 digitos do RA: ");
        scanf("%d", &RA[i]);
    }
    for(i=0; i<9; i++) {
        RAN[i] = RA[i];
        RAN[0] = RA[1];
        RAN[1] = RA[0];
        RAN[8] = RA[7];
        RAN[7] = RA[8];
        printf("%d", RAN[i]);
    }
    return 0;
}