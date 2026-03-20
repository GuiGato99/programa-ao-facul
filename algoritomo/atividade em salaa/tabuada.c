#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int i, t, inicial, fim;

    printf("Vamos brincar de tabuada\n");

    printf("Tabuada do: ");
    scanf("%d", &t);

    printf("Condicao inicial: ");
    scanf("%d", &inicial);

    printf("Condicao final: ");
    scanf("%d", &fim);

    for(i = inicial; i <= fim; i++){
        printf("%d x %d = %d\n", t, i, t * i);
    }

    return 0;
}