#include <stdio.h>
#include <math.h>

int main (){
    int a, b, c;

    printf("Digite os coeficientes a, b e c da equacao do segundo grau: ");
    scanf("%d %d %d", &a, &b, &c);

    float delta = b*b - 4*a*c;
    if (delta < 0){
        printf("A equacao naum tem raizes reias!\n");
    } else if (delta == 0){
        float x = -b / (2.0 * a);
        printf("A equacao tem uma raiz real: %.2f\n", x);
    } else {
        float x1 = (-b + sqrt(delta)) / (2.0 * a);
        float x2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("A equacao tem duas raizes reais: %.2f e %.2f\n", x1, x2);
    }


    return 0;
}