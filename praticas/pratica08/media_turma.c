#include <stdio.h>

int main(){

    float notas[10];
    float soma = 0.0f; 
    float media = 0.0f;
    int qtde_acima_media=0;

    for(int i=0; i<10; i++){
        printf("Digite sua nota: ");
        scanf("%f", &notas[i]);
        getchar();

        soma = soma + notas[i];
    }

    media = soma/10;

    for(int i=0; i<10; i++){
        if(notas[i]> media){
            qtde_acima_media++;  
        }
    }

    printf("soma %.2f\n", soma);
    printf("A media foi das suas notas foram: %.2f\n", media);
    printf("E teve %i notas acima da media.", qtde_acima_media);

    return 0;
}