#include <stdio.h>

int main (){
    long int populacao_mundial = 780000000L;
    printf("Populacao Mundial: %li\n", populacao_mundial);

    const short int HORA_EM_SEGUNDOS = 3600;
    printf("1 hora corresponde a %i segundos.\n", HORA_EM_SEGUNDOS);

    long double precisao_extrema = 3.14129265358979323846L;
    printf("Precisao Extrema: %Lf\n", precisao_extrema);



    return 0;
}