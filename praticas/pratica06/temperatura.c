#include <stdio.h>

int main (){
    float temperatura;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    if (temperatura > 40.0f){
        printf("Esta muito quente hoje!\n");
    } else if (temperatura > 30.0f){
        printf("Esta quente hoje!\n");
    }else if (temperatura > 20.0f){
        printf("Esta agradavel hoje!\n");
    } else {
        printf("Esta frio hoje!\n");
    }

    

    return 0;
}