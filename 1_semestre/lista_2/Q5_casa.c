#include <stdio.h>
// Questão 2 (CASA) - Algoritmo salário.

int main()
{
    int N;
    float SB, H, SL;
    printf("Insira o salario bruto: \n");
    scanf("%f", &SB);
    printf("Insira as horas trabalhadas no mes: \n");
    scanf("%f", &H);
    printf("Insira o numero de funcionarios: \n");
    scanf("%i", &N);

    if (SB>0) {
        if (SB<800.00 && H>160) {
            SL = SB+(SB/160)*(H-160)*1.5;
            printf("%f\n", SL);
        }
        else {
            if (SB<800.00 && H<160) {
                SL = SB;
                printf("%f\n", SL);
            }
            else {
                if (SB>=800.00 && SB<=1600.00 && H>160) {
                    SL = ((SB*0.92)*0.95)+(SB+(SB/160)*(H-160)*1.5);
                    printf("%f\n", SL);
                }
                else {
                    if (SB>=800.00 && SB<=1600.00 && H<160) {
                        SL = (SB*0.92)*0.95;
                        printf("%f\n", SL);
                    }
                    else {
                        if (SB>1600.00 && H>160) {
                            SL = ((SB*0.85)*0.93)+((SB/160)*(H-160)*(1.5));
                            printf("%f\n", SL);
                        }
                        else {
                            if (SB>1600.00 && H<160) {
                                SL = (SB*0.85)*0.93;
                                printf("%f\n", SL);
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}