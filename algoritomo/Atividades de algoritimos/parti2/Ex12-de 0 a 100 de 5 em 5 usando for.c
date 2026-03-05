#include <stdio.h>

int main() {

    int i;

    printf("Numeros de 0 a 100 de 5 em 5:\n");

    for(i = 0; i <= 100; i += 5) {
        printf("%d\n", i);
    }

    return 0;
}