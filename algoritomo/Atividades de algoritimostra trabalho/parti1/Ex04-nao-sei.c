#include <stdio.h>

int main() {
    float comprimento, largura, altura, volume;

    printf("Digite o comprimento do cubo: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do cubo: ");
    scanf("%f", &largura);

    printf("Digite a altura do cubo: ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("O volume do cubo é: %.2f\n", volume);

    return 0;
}