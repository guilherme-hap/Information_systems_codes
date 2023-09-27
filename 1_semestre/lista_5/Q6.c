// Questão 6

#include <stdio.h>
#include <math.h>

int main() {
    int A[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int B[30], i, pesq, achou;
    char resp;
    for(i=0; i<30; i++) {
       B[i] = pow(A[i], 3);
    }
    resp = 's';
    while (resp == 's' || resp == 'S') {
        printf("Informe o numero a ser pesquisado: \n");
        fflush(stdin);
        scanf("%d", &pesq);
        i=0;
        achou=0;
        while(i<=30 && achou==0) {
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
    return 0;
}