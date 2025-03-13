#include <stdio.h>

int main() {
    printf("%5i\n", 1234);
    printf("%5i\n", 56789);
    printf("%05i\n", 1); //o 05 fala que o número tem que ter 5 dígitos, se não tiver, completa com 0
    printf("(%i, %i, %i)\n", -1, 1, 5); // aparece como coordenada
    printf("%02i/%02i/%4i\n",5, 8, 2024); //data

    return 0;
}