#include <stdio.h>
int main( ){
    int idade;
    if(idade > 18){
        printf("adulto ");
    } else if (idade >= 12 && idade < 18 ){
        printf("adolesente");
    }else{
        printf("criança");
    }

}