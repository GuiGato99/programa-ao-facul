#include <stdio.h>

int main() {

    char letra;

    printf("Escolha uma vogal (a, e, i, o, u): ");
    scanf(" %c", &letra);

    switch(letra) {

        case 'a':
        case 'A':
            printf("Palavra: Amor\n");
            break;

        case 'e':
        case 'E':
            printf("Palavra: Escola\n");
            break;

        case 'i':
        case 'I':
            printf("Palavra: Igreja\n");
            break;

        case 'o':
        case 'O':
            printf("Palavra: Ovo\n");
            break;

        case 'u':
        case 'U':
            printf("Palavra: Uva\n");
            break;

        default:
            printf("Essa letra nao eh uma vogal.\n");
    }

    return 0;
}