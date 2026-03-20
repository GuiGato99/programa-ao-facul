#include <stdio.h>

int main() {
    char nome[50];
    float nota1, nota2, media;

    // Ler e mostrar o nome
    printf("Digite o nome do aluno: ");
    scanf("%f[^\n]s", nome); // Lê o nome completo com espaços

    // Ler as notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    // Calcular a média
    media = (nota1 + nota2) / 2;

    // Mostrar a média
    printf("\nAluno: %s\n", nome);
    printf("Media: %.2f\n", media);

    // Verificar a situação do aluno
    if(media < 5.0) {
        printf("Situacao: Reprovado\n");
    } 
    else if(media <= 6.9) {
        printf("Situacao: Recuperacao\n");
    } 
    else {
        printf("Situacao: Aprovado\n");
    }

    return 0;
}