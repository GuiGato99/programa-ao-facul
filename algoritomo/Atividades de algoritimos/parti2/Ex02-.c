#include <stdio.h>

int main() {
    int opcao;

    printf("MENU DE SOBREMESAS\n");
    printf("1 - Sorvete\n");
    printf("2 - Bolo\n");
    printf("3 - Pudim\n");
    printf("4 - Chocolate\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Voce escolheu Sorvete\n");
            break;

        case 2:
            printf("Voce escolheu Bolo\n");
            break;

        case 3:
            printf("Voce escolheu Pudim\n");
            break;

        case 4:
            printf("Voce escolheu Chocolate\n");
            break;

        default:
            printf("Essa opcao nao existe\n");
    }

    return 0;
}