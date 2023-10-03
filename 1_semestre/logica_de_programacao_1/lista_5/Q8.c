// Questão 8
#include <stdio.h>

int main() {
    int B[40], i, j, aux, achou, pesq;
    char resp;

    for(i=1; i<=40; i++) {
        printf("Insira a nota do aluno: \n");
        scanf("%d", &B[i]);
    }
    for(i=1; i<=40; i++) {
        for(j=i; j>0; j--) {
            if(B[j-1]>B[j]) {
                aux = B[j];
                B[j] = B[j-1];
                B[j-1] = aux;
            }
        }
    }

    resp = 's';
    while (resp == 's' || resp == 'S') {
        printf("Informe a nota a ser pesquisada: \n");
        fflush(stdin);
        scanf("%d", &pesq);
        i=0;
        achou=0;
        while(i<=40 && achou==0) {
            if(pesq==B[i])
                achou=1;
            else
                i++;
        }
        if(achou == 1)
           printf("a nota achada foi %d na posicao %d\n", pesq, i);
        else {
            printf("%d nota nao foi localizado\n", pesq);
            printf("deseja continuar a pesquisa? [S]IM ou [N]AO e <enter>\n");
            fflush(stdin); resp=getchar();
        }
    }
    for(i=1; i<=40; i++) {
        printf("a nota %d esta na posicao %d\n", B[i], i);
    }

    for(i=1; i<=40; i++) {
        printf("%d\n", B[i]);
    }
    return 0;
}