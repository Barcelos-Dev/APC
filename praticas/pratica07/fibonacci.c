#include <stdio.h>

int main (){
    int n, anterior, proximo, auxiliar;


    printf("Digite um numero: ");
    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        auxiliar = proximo;
        proximo = anterior + proximo;
        anterior = auxiliar;

        printf("%i, ", proximo);

        
    }
    


    return 0; 
}