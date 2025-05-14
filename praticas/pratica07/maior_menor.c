#include <stdio.h>

int main(){

    int numero=0, maior=0, menor=0;

    printf("Digite um numero: ");
    scanf("%i", &numero);
    maior=numero;
    menor=numero;

    while(numero != 0){
        if(numero> maior){
            maior=numero;
        }
        if (numero< menor){
            menor=numero;
        }
        scanf("%i", &numero);
    }

    printf("O maior numero foi %i\n", maior);
    printf("O menor numero foi %i\n", menor);



    return 0;
}