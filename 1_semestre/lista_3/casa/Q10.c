// Questão 10 (CASA).
#include <stdio.h>

int main()
{
    char ascii=43, ascii1=45, ascii2=42, ascii3=47, sair='S', R;
    float a, b, r;

    while (R != sair) {
    fflush (stdin);
    printf("Insira uma operacao aritmetica (+, -, *, /) para ser realizada ou digite S para sair: \n");
    scanf("%c", &R);
       if (R==ascii) {
            printf("Insira o primeiro operador: \n");
            scanf("%f", &a);
            printf("Insira o segundo operador: \n");
            scanf("%f", &b);
            r=a+b;
            printf("O resultado de %.2f + %.2f = %.2f\n", a, b, r);
        }
        else {
            if (R==ascii1) {
                printf("Insira o primeiro operador: \n");
                scanf("%f", &a);
                printf("Insira o segundo operador: \n");
                scanf("%f", &b);
                r=a-b;
                printf("O resultado de %.2f - %.2f = %.2f\n", a, b, r);
            }
            else {
                if (R==ascii2) {
                    printf("Insira o primeiro operador: \n");
                    scanf("%f", &a);
                    printf("Insira o segundo operador: \n");
                    scanf("%f", &b);
                    r=a*b;
                    printf("O resultado de %.2f * %.2f = %.2f\n", a, b, r);
                }
                else {
                    if (R==ascii3) {
                        printf("Insira o primeiro operador: \n");
                        scanf("%f", &a);
                        printf("Insira o segundo operador: \n");
                        scanf("%f", &b);
                        r=a/b;
                        printf("O resultado de %.2f / %.2f = %.2f\n", a, b, r);
                    }
                    else {
                        if (R==sair) {
                            printf("O programa vai ser encerrado!\n");
                            break;
                        }
                    }
                }
            }
        }
    }
    return 0;
}