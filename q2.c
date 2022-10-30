#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    /*3) Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
    variável auxiliar.*/

    int a, b, aux;
    printf("Insira um valor inteiro para a variavel A: ");
    scanf("%d", &a);
    printf("Insira um valor inteiro para a  variavel B: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Os valores de A e B agora sao, respectivamente: %d e %d", a, b);
    return 0;
}