#include <stdio.h>

int main (){
    char tecla;

    tecla = 'A';
    printf("Tecla = %c\n", tecla);

    tecla = 100;
    printf("Tecla = %c\n", tecla);

    int numero = 10;
    printf("Numero = %i\n", numero);

    //int numero, aqui num pode 
    {
        int numero = 200; //aqui pode
        printf("Numero = %i\n", numero);
    }

    float media_aritimetica = 9.5f;
    printf("Media = %.1f\n", media_aritimetica);

    double dizima = 2.33333333333;
    printf("Dizima = %.10f\n", dizima);


    return 0;
}