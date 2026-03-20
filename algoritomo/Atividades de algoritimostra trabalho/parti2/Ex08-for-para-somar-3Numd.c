#include <stdio.h>

int main() {

    int i, numero, soma = 0;

    for(i = 1; i <= 3; i++) {

        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        soma = soma + numero;
    }

    printf("A soma dos 3 numeros eh: %d\n", soma);

    return 0;
}