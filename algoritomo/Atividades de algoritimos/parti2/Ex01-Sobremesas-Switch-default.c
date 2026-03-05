#include <stdio.h>

int main() {
    float A, B;

    printf("Digite a altura da pessoa A: ");
    scanf("%f", &A);

    printf("Digite a altura da pessoa B: ");
    scanf("%f", &B);

    if (A > B) {
        printf("A eh maior que B\n");
    }
    else if (B > A) {
        printf("B eh maior que A\n");
    }
    else {
        printf("A e B tem a mesma altura\n");
    }

    return 0;
}