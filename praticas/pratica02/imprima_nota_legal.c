#include <stdio.h>

int main (){

    printf("%s\n","==============================");
    printf("%20s\n","Nota Legal");
    printf("%s\n","==============================");
    printf("%s\t\t %s %s\n","Produto","Qtd","Valor Unit");
    printf("%s\t %03i\t %.2f\n","Camiseta", 2, 39.99);
    printf("%s\t\t %03i\t %.2f\n","Calca", 1, 89.90);
    printf("%s\t %03i\t %.2f\n","Meia Social", 3, 19.99);
    printf("%s","==============================");

    return 0;
}