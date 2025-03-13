#include <stdio.h>

int main() {
    printf("%f\n", 3.121592); //todas as casas decimais
    printf("%.2f\n", 3.141592);//somente 2 casas decimais
    printf("%.7f\n", 3.141592);//somente 7 casas decimais

    printf("%4.1f\n", 10.0);//alinhou a direita por causa do 4 e só tem 1 casa decimal pelo .1
    printf("%4.1f\n", 8.4);

    printf ("R$ %6.2f\n", 291.85);// 6 casas no total, 2 decimais

    return 0;
}