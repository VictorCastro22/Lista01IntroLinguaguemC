#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    /*Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
    porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
    Assuma que a conta será dividida igualmente.*/

    float desp, total, pagar;
    float gorj, p;

    printf("Insira o valor da despesa: ");
    scanf("%f", &desp);
    printf("Insira a porcentagem da gorjeta: ");
    scanf("%f", &gorj);
    printf("Insira o total de pessoas que irão dividir a conta: ");
    scanf("%f", &p);

    gorj = gorj / 100;
    total = desp + (desp * gorj);
    pagar = total / p;

    printf("O valor para cada um é de: %.2f", pagar);
    return 0;
}