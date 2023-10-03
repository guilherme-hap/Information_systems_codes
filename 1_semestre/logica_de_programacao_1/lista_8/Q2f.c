// Questão 2 - Letra f
#include <stdio.h>

int fibonacci(int N) {
    int atual, anterior, posterior, i;
    anterior = 1;
    posterior = 1;
    atual = 0; 
    for(i=0; i<=N; i++) {
        posterior = atual+anterior;
        anterior = atual;
        atual = posterior;
        printf("%d ", posterior);
    }
    return 0;
}

int main() {
    int limite;
    printf("Insira ate onde a sequencia deve ir: \n");
    scanf("%d", &limite);

    fibonacci(limite);
}
