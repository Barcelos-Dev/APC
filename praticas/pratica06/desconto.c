#include <stdio.h>

int main (){

    float valor_bruto;
    float valor_desconto;

    printf("Digite o valor bruto: ");
    scanf("%f", &valor_bruto);

    if (valor_bruto <= 100.00f){
        valor_desconto = valor_bruto * 0.01f;
        printf("O valor do desconto eh %.2f", valor_desconto);
    } else if (valor_bruto <= 500.00f){
        valor_desconto = valor_bruto * 0.05f;
        printf("O valor do desconto eh %.2f\n", valor_desconto);
    } else {
        valor_bruto * 0.01f;
        printf("O valor do desconto eh %.2f\n", valor_desconto);
    }

    printf("O valor bruto eh %.2f\n", valor_bruto);
    printf("O valor de desconto eh %.2f\n", valor_desconto);



    return 0;
}