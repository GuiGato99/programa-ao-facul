#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade <= 12) {
        printf("Voce é uma criança.\n");
    }
    else if(idade <= 19) {
        printf("Voce é um adolescente.\n");
    }
    else if(idade <= 60) {
        printf("Voce é um adulto.\n");
    }
    else {
        printf("Voce é um idoso.\n");
    }

    return 0;
}