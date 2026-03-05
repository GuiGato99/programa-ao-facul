#include <stdio.h>

int main() {
    float num1, num2, resultado;
    int opcao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("\nEscolha a operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Elevar ao quadrado\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case 2:
            printf("Primeiro numero ao quadrado: %.2f\n", num1 * num1);
            printf("Segundo numero ao quadrado: %.2f\n", num2 * num2);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado da multiplicacao: %.2f\n", resultado);
            break;
        case 4:
            if(num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado da divisao: %.2f\n", resultado);
            } else {
                printf("Erro: divisao por zero!\n");
            }
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}