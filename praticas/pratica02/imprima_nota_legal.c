#include <stdio.h>

int main (){

    printf("%s\n","===============================");
    printf("%20s\n","Nota Legal");
    printf("%s\n","===============================");
    printf("%-13s %6s %10s\n","Produto","Qtd","Valor Unit");
    printf("%-13s %6.03i %10.2f\n","Camiseta", 2, 39.99);
    printf("%-13s %6.03i %10.2f\n","Calca", 1, 89.90);
    printf("%-13s %6.03i %10.2f\n","Meia Social", 3, 19.99);
    printf("%s","===============================");

    return 0;
}