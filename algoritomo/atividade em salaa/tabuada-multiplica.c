#include <stdio.h>

int main() {

    int i, a, b, c, r;
    printf ("digite um numero para multiplicar : ");
    scanf("%d",&a);
    printf ("quando começa : ");
    scanf("%d",&b);
    printf ("quando termina : ");
    scanf("%d",&c);

    for ( i = b; i <= c; i++){
        r = a * i;
        printf("%d x %d = %d\n", a, i, r);
    }
    return (0);
}