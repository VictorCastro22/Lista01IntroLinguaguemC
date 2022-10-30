#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    /*Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
    para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
    “a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
    estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.*/

    int a, b, aux;
    printf("Insira um valor inteiro para a variavel A: ");
    scanf("%d", &a);
    printf("Insira um valor inteiro para a  variavel B: ");
    scanf("%d", &b);

    aux = a;
    a = b;
    b = aux;

    printf("Os valores de A e B agora sao, respectivamente: %d e %d", a, b);
    return 0;
}