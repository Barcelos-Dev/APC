#include <stdio.h>

int main (){

    int numero, fatorial=1;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    for(int i=numero; i>0; i--){
        fatorial = fatorial * i;
    }

    printf("O fatorial do %i eh %i\n", numero, fatorial);

    return 0;
}