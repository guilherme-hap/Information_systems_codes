// Questão 7
#include <stdio.h>

int main() {
    int e;

    printf("Digite o numero de erros detectados: ");
    scanf("%d", &e);

    if (e == 1) {
        printf("1 erro detectado\n");
    } else {
        printf("%d erros detectados\n", e);
    }

    return 0;
}
