#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    /*Uma empresa contrata um encanador a R$ 45,00 por dia. Fa�a um programa que solicite o
    n�mero de dias trabalhados pelo encanador e imprima a quantia l�quida que dever� ser paga,
    sabendo que s�o descontados 8% para imposto de renda.*/

    int dias, liquido, din = 45, brut;

    printf("Insira o n�mero de dias trabalhados: ");
    scanf("%d", &dias);

    brut = dias * din;
    liquido = brut - (brut * 0.08);

    printf("O total a receber �: %.2d", liquido);
    return 0;
}