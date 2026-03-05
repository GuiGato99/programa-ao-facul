#include <stdio.h>
int main( ){
    float A,B;
    printf("digita dois valores\n");
    scanf("%f", &A, &B);
    printf("soma=%.2f,subtraçao=%,divisao=%f, mult=%f",A+B, A-B, A/B, A*B);
    return(0);
}