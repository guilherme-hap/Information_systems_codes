// Questão 4
#include <stdio.h>

int descobrirDia(int mes, char bissexto) {
    if(bissexto == 'S' || bissexto == 's') {
        if(mes == 2) {
            return 29;
        }
        if(mes % 2 == 0 && mes != 2) {
            if(mes < 8) {
                return 30;
            }
            else {
                return 31;
            }
        }
        else {
            if(mes < 8) {
                return 31;
            }
            else {
                return 30;
            }
        }
    }
    else {
        if(mes == 2) {
            return 28;
        }
        if(mes % 2 == 0 && mes != 2) {
            if(mes < 8) {
                return 30;
            }
            else {
                return 31;
            }
        }
        else {
            if(mes < 8) {
                return 31;
            }
            else {
                return 30;
            }
        }
    }
}

int main() {
    int opcao;
    char resp;

    printf("O ano eh bissexto(S/N)? \n");
    scanf("%c", &resp);

    printf("Insira o numero do mes que deseja saber a quantidade de dias: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("O mes %d (janeiro) tem %d dias.", opcao, descobrirDia(opcao, resp));
        break;
    case 2:
        printf("O mes %d (fevereiro) tem %d dias.", opcao, descobrirDia(opcao, resp));
        break;    
    case 3:
        printf("O mes %d (marco) tem %d dias.", opcao, descobrirDia(opcao, resp));
        break;
    case 4:
        printf("O mes %d (abril) tem %d dias.", opcao, descobrirDia(opcao, resp));
        break;
    case 5:
        printf("O mes %d (maio) tem %d dias.", opcao, descobrirDia(opcao, resp));
        break;
    case 6:
        printf("O mes %d (junho) tem %d dias.", opcao, descobrirDia(opcao, resp));
        break;
    case 7:
        printf("O mes %d (julho) tem %d dias.", opcao, descobrirDia(opcao, resp));
        break;
    case 8:
        printf("O mes %d (agosto) tem %d dias.", opcao, descobrirDia(opcao, resp));
        break;
    case 9:
        printf("O mes %d (setembro) tem %d dias.", opcao, descobrirDia(opcao, resp));
        break;
    case 10:
        printf("O mes %d (outubro) tem %d dias.", opcao, descobrirDia(opcao, resp));
        break;
    case 11:
        printf("O mes %d (novembro) tem %d dias.", opcao, descobrirDia(opcao, resp));
        break;
    case 12:
        printf("O mes %d (dezembro) tem %d dias.", opcao, descobrirDia(opcao, resp));
        break;    
    default:
        printf("Mes invalido!\nEncerrando programa...\n");
        break;
    }
}