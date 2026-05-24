#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char frase[100];
    int i;

    int qtdCaracteres = 0;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for(i = 0; frase[i] != '\0'; i++) {

        if(frase[i] != ' ' && frase[i] != '\n') {
            qtdCaracteres++;
        }
    }

    printf("\nQuantidade de caracteres (sem espacos): %d\n",
           qtdCaracteres);

    printf("\nFrase em maiusculas:\n");

    for(i = 0; frase[i] != '\0'; i++) {
        printf("%c", toupper(frase[i]));
    }

    printf("\n\nFrase ao contrario:\n");

    for(i = strlen(frase) - 1; i >= 0; i--) {

        if(frase[i] != '\n') {
            printf("%c", frase[i]);
        }
    }

    printf("\n\nFrase com substituicao:\n");

    for(i = 0; frase[i] != '\0'; i++) {

        if(frase[i] == 'a' || frase[i] == 'A') {
            printf("@");
        }
        else {
            printf("%c", frase[i]);
        }
    }

    return 0;
};