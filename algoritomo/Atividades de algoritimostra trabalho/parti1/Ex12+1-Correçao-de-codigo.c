#include <stdio.h>

int main() {
    int dias;
    float valor;

    printf("Hotel Praia - Diarias:\n");
    printf("1 - 3 dias\n");
    printf("2 - 5 dias\n");
    printf("3 - 10 dias\n");

    // Mostrar todas as condições e calcular o valor
    dias = 3;
    valor = 80.0 * 3 / 3; // valor fixo R$ 80,00
    printf("\nSe Ana ficar %d dias, valor da diaria: R$ %.2f, total: R$ %.2f\n", dias, 80.0, valor);

    dias = 5;
    valor = 100.0 * 5 / 5; // valor fixo R$ 100,00
    printf("Se Ana ficar %d dias, valor da diaria: R$ %.2f, total: R$ %.2f\n", dias, 100.0, valor);

    dias = 10;
    valor = 150.0 * 10 / 10; // valor fixo R$ 150,00
    printf("Se Ana ficar %d dias, valor da diaria: R$ %.2f, total: R$ %.2f\n", dias, 150.0, valor);

    return 0;
}