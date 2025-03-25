#include <stdio.h> 

int main (){
    long int matricula = 00000000;
    int idade = 99;
    float altura = 9.90;
    float peso = 999.0;
    char sexo = 'F';

    printf("Matricula: %08i \n", matricula);
    printf("Idade: %i anos\n", idade);
    printf("Altura: %.2f m \n", altura);
    printf("Peso: %04.1f kg \n", peso);
    printf("Sexo: %c \n", sexo);


    return 0;
}