#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    /*Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
    conversão para horas, minutos e segundos.
    Exemplo:
    Entrada: 3672
    Saída: 1:1:12*/

    int segundos, s, m, h, resto;

    printf("Insira o total de segundos: ");
    scanf("%d", &segundos);

    h = segundos / 3600;
    resto = segundos % 3600;
    m = resto / 60;
    s = resto % 60;

    printf("%d:%d:%d", h, m, s);
    return 0;
}