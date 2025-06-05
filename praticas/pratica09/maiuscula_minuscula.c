#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(){

    char string [11];
    char maiusculo [11];
    char minusculo [11];

    printf("Digite uma palavra: ");
    scanf("%[^\n]s", string);
    while (getchar() != '\n');

    memset(maiusculo, minusculo, \0);

    for (int = 0; i<strlen(string); i++){
        maiusculo[i] = toupper(string[i]);
        minusculo[i] = tolower(string)
    }



    return 0;
}