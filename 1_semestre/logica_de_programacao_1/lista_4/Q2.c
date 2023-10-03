// Questão 2 - SALA
#include <stdio.h>

int main()
{
    int fat[5], i, vet[5];

    for (i=0; i<5; i++)
    {
        printf("Digite um numero:\n");
        scanf ("%d", &vet[i]);
    }

    for (i=0; i<5; i++) {
        for (fat[i]=1; vet[i]>1; vet[i]--) {
            fat[i] *= vet[i];
        }
        {
            printf ("\n");      
        }
    printf("%d", fat[i]);
    }   

return 0;
}