#include <stdio.h>

int main(){

    char operacao;

    printf("Digite a operacao desejada (+, -, *, /): ");
    scanf(" %c", &operacao);

    float num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    float resultado = &num1, &operacao, &num2;
    printf("O resultado da operacao %c entre %.2f e %.2f eh: %.2f ", operacao, num1, num2, resultado);

    return 0;
}