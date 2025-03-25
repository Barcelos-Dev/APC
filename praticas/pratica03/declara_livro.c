#include <stdio.h>

int main (){
unsigned long int ISBN = 0000000000000;
int paginas = 000;
float preco = 0000.00;
int ano = 0000;

printf("ISBN: %013lu\n", ISBN);
printf("Num. Paginas: %03i\n", paginas);
printf("Preco: R$ %07.2f\n", preco);
printf("Publicado em: %04i\n", ano);


    return 0;
}