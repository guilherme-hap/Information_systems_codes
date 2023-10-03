// Questão 7
#include <stdio.h>

int main() {
    int A[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int B[20], i, c, aux, pesq, achou;
    char resp;
    for(i=0; i<20; i++) {
       B[i] = A[i]+2;
    }
   
    do {
        c = 0;
        for(i=0; i<20; i++) {
            if(B[i+1]>B[i]) {
                aux = B[i+1];
                B[i+1] = B[i];
                B[i] = aux;
                c = i;
            }
        }
    } while(c != 0);
   
    resp = 's';
    while (resp == 's' || resp == 'S') {
        printf("Informe o numero a ser pesquisado: \n");
        fflush(stdin); scanf("%d", &pesq);
        i=0;
        achou=0;
        while(i<20 && achou==0) {
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