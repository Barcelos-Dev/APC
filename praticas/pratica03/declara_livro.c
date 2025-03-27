#include <stdio.h>

int main (){
long int ISBN = 0;
int paginas = 0;
float preco = 0;
int ano = 0;

printf("ISBN: %013lu\n", ISBN);
printf("Num. Paginas: %03i\n", paginas);
printf("Preco: R$ %07.2f\n", preco);
printf("Publicado em: %04i\n", ano);


    return 0;
}