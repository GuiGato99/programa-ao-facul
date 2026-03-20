#include <stdio.h>

int main() {

    int i, numero, soma = 0;

    for(i = 1; i <= 10; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);
        soma = soma + numero;  // vai acumulando a soma
    }

    printf("A soma dos 10 numeros eh: %d\n", soma);

    return 0;
}