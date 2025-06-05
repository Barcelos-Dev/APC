#include <stdio.h>

int main()
{

    enum dias_da_semana_e
    {
        dom = 1,
        seg,
        ter,
        qua,
        qui,
        sex,
        sab
    };

    printf("Informe um dia da semana (1 a 7): ");
    int dia_da_semana = 0;
    scanf("%i", &dia_da_semana);

    switch(dia_da_semana){
        case seg:
        case ter:
        case qua:
        case qui:
        case sex: printf("Eh um dia util\n"); break;
        case dom:
        case sab: printf("Naum eh um dia util\n"); break;
        default: printf("Dia invalido!\n"); break;
    }

    return 0;
}