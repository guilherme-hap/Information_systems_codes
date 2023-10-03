// Questão 1 - Casa
#include <stdio.h>

int main()
{
    int RAC[9], RAV[9], i;
    for(i=0; i<9; i++) {
        printf("Insira cada digito do RAV: ");
        scanf("%d", &RAV[i]);
    }
    for(i=0; i<9; i++) {
        RAC[i] = RAV[i];
        RAC[2] = RAV[7];
        RAC[3] = RAV[6];
        RAC[6] = RAV[2];
        RAC[7] = RAV[3];
        printf("%d", RAC[i]);
    }
    return 0;
}