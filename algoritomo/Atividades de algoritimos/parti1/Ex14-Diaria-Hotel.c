#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade <= 12) {
        printf("Voce tem %d anos e eh uma crianca\n", idade);
    }
    else if(idade <= 19) {
        printf("Voce tem %d anos e eh um adolescente\n", idade);
    }
    else if(idade <= 60) {
        printf("Voce tem %d anos e eh um adulto\n", idade);
    }
    else {
        printf("Voce tem %d anos e eh um idoso\n", idade);
    }

    return 0;
}