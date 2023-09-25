#include <stdio.h>
// Questão 2 (CASA) - Algoritmo dist_num.

int main()
{
    int NC, ND, R;
    NC = 54;
    printf("Insira um numero entre 0 e 100: \n");
    scanf("%i", &ND);

    if (ND >= 0 && ND <= 100) {
        if (NC-ND>=0) {
            R = NC-ND;
            printf("%i\n", R);
        }
        else {
            R = (NC-ND)*(-1);
            printf("%i\n", R);
        }   
    }
    else{
        printf("Numero invalido!\n");
    }
    return 0;
}