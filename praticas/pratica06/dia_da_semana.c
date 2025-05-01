#include <stdio.h>

int main (){

    int dia;

    printf("Digite o dia da semana: ");
    scanf("%i", &dia);

    switch(dia){
        case 1: printf("Hoje eh Domingo!\n"); break;
        case 2: printf("Hoje eh Segunda!\n"); break;
        case 3: printf("Hoje eh Terca!\n"); break;
        case 4: printf("Hoje eh Quarta!\n"); break;
        case 5: printf("Hoje eh Quinta!\n"); break;
        case 6: printf("Hoje eh Sexta!\n"); break;
        case 7: printf("Hoje eh Sabado!\n"); break;
        default: printf("O dia informado eh invalido!"); break;

    }

    return 0;
}