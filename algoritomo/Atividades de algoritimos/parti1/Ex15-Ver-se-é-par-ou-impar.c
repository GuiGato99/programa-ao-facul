#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, i;

    printf("Digite um numero: ");
    scanf("%d", &a);

    b = a % 2;

    if(b == 0) {
        printf("O numero %d eh par\n", a);
    }
    else if(b != 0) {
        printf("O numero %d eh impar\n", a);
    }

    return 0;
}
//...Alternativa correta...//
//...(a)float; f;f; par; =; f; impar 
//...(b) float; f; f; impar; !; f; par 
//...(c) int; d; d; impar; !; d; par 
//...(d) int; d; d; par; =; d; impar 
//...(e) int; d; d; par; !; d; impar (x) Alternativa correta 