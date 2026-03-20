#include <stdio.h>

int main() {
    char nome[50];
    float nota1, nota2, media;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Nome: %s\n", nome);
    printf("Media: %.2f\n", media);

    if (media < 5.0) {
        printf("Situacao: Reprovado\n");
    }
    else if (media >= 5.1 && media <= 6.9) {
        printf("Situacao: Recuperacao\n");
    }
    else if (media >= 7.0 && media <= 10.0) {
        printf("Situacao: Aprovado\n");
    }

    return 0;
}