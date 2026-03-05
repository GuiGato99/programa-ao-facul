// #include <stdio.h> 
//#include <stdlib.h>
// main() 
//{ int idade; printf ("Digite a sua idade\n"); 
//scanf("%f", &idade); 
//if(idade <= 12){
 //printf("Voce tem %f e eh uma criança\n, idade");} 
 //if(idade <= 19);{
 // printf("Voce tem %f e eh um adolescente\n", idade);} 
 //if(idade <= 60);{ 
 //printf("Voce tem %f e eh um adulto\n", idade);} 
 //else{ 
 //printf("Voce tem %f e eh um idoso\n, idade"); } 
 //......Codigo Errado... //



//.... Codigo corrigido ....//

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