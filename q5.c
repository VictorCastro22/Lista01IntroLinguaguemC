#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    /*Crie um programa em C que permita fazer a convers�o cambial entre Reais e D�lares. Considere
    como taxa de cambio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
    D�lares.*/

    float reais, dolar;

    printf("Insira o total de reais que ser� convertido: ");
    scanf("%f", &reais);

    dolar = reais / 5.30;

    printf("O total de dolar �: %.2f", dolar);
    return 0;
}