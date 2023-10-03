// Questão 8
#include <stdio.h>

#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_RESET   "\x1b[0m"

float calculoMedia(float x, float y) {
    float media;

    media = (x+y)/2;

    return media;
}

int main() {
    float nota1, nota2;

    printf("Insira a primeira nota do aluno: \n");
    scanf("%f", &nota1);
    printf("Insira a segunda nota do aluno: \n");
    scanf("%f", &nota2);

    if(calculoMedia(nota1, nota2) >= 7)
        printf(ANSI_COLOR_BLUE "Aluno aprovado! Media = %.2f\n" ANSI_COLOR_RESET, calculoMedia(nota1, nota2));
    else {
        if(calculoMedia(nota1, nota2) < 3) 
            printf(ANSI_COLOR_RED "Aluno reprovado! Media = %.2f\n" ANSI_COLOR_RESET, calculoMedia(nota1, nota2));
        else if(calculoMedia(nota1, nota2) < 7 && calculoMedia(nota1, nota2) >= 3)
            printf(ANSI_COLOR_YELLOW "Aluno em recuperacao! Media = %.2f\n" ANSI_COLOR_RESET, calculoMedia(nota1, nota2));
    }
    
    return 0;
}