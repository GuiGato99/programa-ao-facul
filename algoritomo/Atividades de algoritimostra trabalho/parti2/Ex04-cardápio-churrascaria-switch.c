#include <stdio.h>

int main() {
    int opcao;

    printf(" CARDAPIO DA CHURRASCARIA \n");
    printf("1 - Picanha\n");
    printf("2 - Costela\n");
    printf("3 - Frango Assado\n");
    printf("4 - Linguica\n");
    printf("5 - Contra File\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Voce escolheu Picanha\n");
            break;

        case 2:
            printf("Voce escolheu Costela\n");
            break;

        case 3:
            printf("Voce escolheu Frango Assado\n");
            break;

        case 4:
            printf("Voce escolheu Linguica\n");
            break;

        case 5:
            printf("Voce escolheu Contra File\n");
            break;

        default:
            printf("Opcao invalida! Escolha um item do cardapio.\n");
    }

    return 0;
}