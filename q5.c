#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    /*Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
    como taxa de cambio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
    Dólares.*/

    float reais, dolar;

    printf("Insira o total de reais que será convertido: ");
    scanf("%f", &reais);

    dolar = reais / 5.30;

    printf("O total de dolar é: %.2f", dolar);
    return 0;
}