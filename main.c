#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int idade;
    float altura;
    char conceito;
    printf("digite a sua idade:");
    scanf("%d", &idade);
    printf("digite a sua altura:");
    scanf("%f", &altura);
    printf("digite um conceito (A B C):");
    scanf(" %c", &conceito);

    printf("idade: %d\n", idade);
    printf("altura: %.2f\n", altura);
    printf("conceito: %c\n", conceito);

    return 0;
}