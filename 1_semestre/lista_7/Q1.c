// Questão 1
#include <stdio.h>
#include <string.h>

struct Cadastro
    {
        int idade;
        char nome[80];
        char endereco[120];
        char telefone[50];
    };

void cadastroAgenda(struct Cadastro agenda[], int *contador) {
    printf("Voce escolheu a opcao cadastro.\nIniciando procedimentos.\n");
    printf("\n");
    printf("-----------Cadastro-----------\n");

    if(*contador < 5) {
        struct Cadastro pessoa;

        printf("Cadastro da pessoa %d\n", *contador+1);

        printf("Nome: ");
        fflush(stdin);
        fgets(pessoa.nome, sizeof(pessoa.nome), stdin);

        printf("Idade: ");
        fflush(stdin);
        scanf("%d", &pessoa.idade);

        printf("Endereco: ");
        fflush(stdin);
        fgets(pessoa.endereco, sizeof(pessoa.endereco), stdin);

        printf("Telefone: ");
        fflush(stdin);
        fgets(pessoa.telefone, sizeof(pessoa.telefone), stdin);

        agenda[*contador] = pessoa;

        (*contador)++;
        printf("Cadastro realizado!\n");
    }
    else {
        printf("Agenda cheia. Erro no cadastro!\n");
    }
}

void pesquisaIdade(struct Cadastro agenda[], int contador) {
    printf("Voce escolheu a opcao pesquisa por idade.\nIniciando procedimentos.\n");
    printf("\n");
    printf("-----------Pesquisa-----------\n");

    int idade, i;
    int acha = 0;

    printf("Insira a idade quer pesquisar: \n");
    scanf("%d", &idade);

    for(i = 0; i < contador; i++) {
        if(agenda[i].idade == idade) {
            printf("Registros encontrados para a idade %d:\n", idade);
            printf("Nome: %s", agenda[i].nome);
            printf("Endereco: %s", agenda[i].endereco);
            printf("Telefone: %s", agenda[i].telefone);
            acha = 1;
        }
    }
    if(acha != 1) {
        printf("A idade pesquisada nao possui nenhum registro correspondente!\n");
    }
}

void classificacaoAlfabetica(struct Cadastro agenda[], int contador) {
    printf("Voce escolheu a opcao classificacao por ordem alfabetica.\nIniciando procedimentos.\n");
    printf("\n");
    printf("-----------Classificacao por ordem alfabetica-----------\n");

    int i, j;
    struct Cadastro aux;

    for(i = 0; i < contador - 1; i++) {
        for(j = i + 1; j < contador; j++) {
            if(strcmp(agenda[i].nome, agenda[j].nome) > 0) { // Para mudar para a ordem decrescente basta colocar o "menor que"
                aux = agenda[i];
                agenda[i] = agenda[j];
                agenda[j] = aux;
            }
        }
    }


    for (i = 0; i < contador; i++) {
        printf("Nome: %s\n", agenda[i].nome);
        printf("Endereco: %s", agenda[i].endereco);
        printf("Idade: %d\n", agenda[i].idade);
        printf("Telefone: %s\n", agenda[i].telefone);
    }
}

void alteracaoRegistro(struct Cadastro agenda[], int contador) {
    printf("Voce escolheu a opcao alteracao de um registro com erro.\nIniciando procedimentos.\n");
    printf("\n");
    printf("-----------Alteracao de um registro com erro-----------\n");

    char nome[80];
    int i;
    int acha = 0;

    fflush(stdin);
    printf("Digite o nome do registro a ser alterado: ");
    fgets(nome, sizeof(nome), stdin);

    for (i = 0; i < contador; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            printf("Registro encontrado. Altere o registro:\n");

            printf("Nome: ");
            fflush(stdin);
            fgets(agenda[i].nome, sizeof(agenda[i].nome), stdin);

            printf("Endereco: ");
            fflush(stdin);
            fgets(agenda[i].endereco, sizeof(agenda[i].endereco), stdin);

            printf("Idade: ");
            fflush(stdin);
            scanf("%d", &agenda[i].idade);

            printf("Telefone: ");
            fflush(stdin);
            fgets(agenda[i].telefone, sizeof(agenda[i].telefone), stdin);

            acha = 1;
            printf("Registro alterado com sucesso.\n");
            break;
        }
    }

    if (acha != 1) {
        printf("Nenhum registro encontrado com o nome %s.\n", nome);
    }
}

int main() {
    struct Cadastro agenda[5];
    int opcao, contador = 0;

    do {
        printf("\nMENU DA AGENDA\nInforme o numero da operacao que deseja realizar:\n\n(1) Cadastro\n(2) Pesquisa de registro por idade\n(3) Classificacao alfabetica\n(4) Alteracao de registro digitado com erro\n(5) Sair do menu\n\nOpcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1: cadastroAgenda(agenda, &contador);
            break;
        case 2: pesquisaIdade(agenda, contador);
            break;
        case 3: classificacaoAlfabetica(agenda, contador);
            break;
        case 4: alteracaoRegistro(agenda, contador);
            break;
        case 5: printf("Voce escolheu sair.\nFechando programa!\n");
            break;
        default: printf("Numero informado nao esta nas opcoes ou o caractere eh invalido!\n");
            printf("Fechando o programa!");
            break;
        }
    } while(opcao != 5);

    return 0;
}