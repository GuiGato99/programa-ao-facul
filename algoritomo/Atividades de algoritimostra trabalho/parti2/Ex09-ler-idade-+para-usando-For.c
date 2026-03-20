#include <stdio.h>

int main() {

    int i, idade, maior, menor;

    for(i = 1; i <= 5; i++) {

        printf("Digite a idade da %d pessoa: ", i);
        scanf("%d", &idade);

        if(i == 1) {
            maior = idade;
            menor = idade;
        }

        if(idade > maior) {
            maior = idade;
        }

        if(idade < menor) {
            menor = idade;
        }
    }

    printf("Maior idade: %d\n", maior);
    printf("Menor idade: %d\n", menor);

    return 0;
}