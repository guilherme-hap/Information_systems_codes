// Questão 2
#include <stdio.h>

int main() {
    int A[8], i, B[8], c, aux, pesq, achou;
    char resp;

    for(i=0; i<8; i++) {
        printf("Insira os valores em qualquer ordem: \n");
        scanf("%d", &A[i]);
    }
    for(i=0; i<8; i++) {
        B[i] = A[i]*5;
    }
    do {
        c = 0;
        for(i=0; i==8; i++) {
            if(B[i+1]<B[i]) {
                aux = B[i];
                B[i] = B[i+1];
                B[i+1] = aux;
                c = i;
            }
        }
    } while (c != 0);

    resp = 's';
    while (resp == 's' || resp == 'S') {
        printf("Informe o numero a ser pesquisado: \n");
        fflush(stdin);
        scanf("%d", &pesq);
        i=0;
        achou=0;
        while(i<=8 && achou==0) {
            if(pesq==B[i])
                achou=1;
            else
                i++;
        }
        if(achou == 1)
           printf("O numero achado foi %d na posicao %d\n", pesq, i+1);
        else {
            printf("%d nao foi localizado\n", pesq);
            printf("deseja continuar a pesquisa? [S]IM ou [N]AO e <enter>\n");
            fflush(stdin); resp=getchar();
        }
    }
    for(i=0; i<8; i++) {
        printf("O numero %d esta na posicao %d\n", B[i], i+1);
    }
    return 0;
}