#include <stdio.h>

int main() {

    int grupo, operacao;
    float a, b, resultado;
    int x;

    printf("CALCULADORA \n");
    printf("Escolha o grupo de operacoes:\n");
    printf("1 - Operacoes basicas\n");
    printf("2 - Operacoes especiais\n");
    printf("Opcao: ");
    scanf("%d", &grupo);

    switch(grupo) {

        case 1:
            printf("\nOperacoes basicas:\n");
            printf("1 - Adicao\n");
            printf("2 - Subtracao\n");
            printf("3 - Multiplicacao\n");
            printf("4 - Divisao\n");
            printf("Opcao: ");
            scanf("%d", &operacao);

            printf("Digite o primeiro numero: ");
            scanf("%f", &a);

            printf("Digite o segundo numero: ");
            scanf("%f", &b);

            switch(operacao) {

                case 1:
                    resultado = a + b;
                    printf("Resultado da adicao: %.2f\n", resultado);
                    break;

                case 2:
                    resultado = a - b;
                    printf("Resultado da subtracao: %.2f\n", resultado);
                    break;

                case 3:
                    resultado = a * b;
                    printf("Resultado da multiplicacao: %.2f\n", resultado);
                    break;

                case 4:
                    if(b != 0) {
                        resultado = a / b;
                        printf("Resultado da divisao: %.2f\n", resultado);
                    } else {
                        printf("Nao existe divisao por zero!\n");
                    }
                    break;

                default:
                    printf("Opcao invalida!\n");
            }
            break;

        case 2:
            printf("\n Operacoes especiais:\n");
            printf("1 - Modulo (resto da divisao)\n");
            printf("2 - Soma dos quadrados\n");
            printf("3 - Incremento\n");
            printf("4 - Decremento\n");
            printf("Opcao: ");
            scanf("%d", &operacao);

            switch(operacao) {

                case 1:
                    printf("Digite o primeiro numero inteiro: ");
                    scanf("%d", &x);
                    printf("Digite o segundo numero inteiro: ");
                    scanf("%d", &grupo);
                    printf("Resto da divisao: %d\n", x % grupo);
                    break;

                case 2:
                    printf("Digite o primeiro numero: ");
                    scanf("%f", &a);
                    printf("Digite o segundo numero: ");
                    scanf("%f", &b);
                    resultado = (a * a) + (b * b);
                    printf("Soma dos quadrados: %.2f\n", resultado);
                    break;

                case 3:
                    printf("Digite um numero: ");
                    scanf("%d", &x);
                    x++;
                    printf("Incremento: %d\n", x);
                    break;

                case 4:
                    printf("Digite um numero: ");
                    scanf("%d", &x);
                    x--;
                    printf("Decremento: %d\n", x);
                    break;

                default:
                    printf("Opcao invalida!\n");
            }
            break;

        default:
            printf("Grupo invalido!\n");
    }

    return 0;
}