/*
Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual,
calcule e mostre:
a idade dessa pessoa
quantos anos ela terá em 2050;

*/

#include <stdio.h>

int main()
{
    int ano_nasc,ano_atual,idade,idade_2050;

    printf("Que ano voce nasceu?");
    scanf("%d",&ano_nasc);

    printf("Que ano nos estamos?");
    scanf("%d",&ano_atual);

    idade = ano_atual - ano_nasc;
    idade_2050 = 2050 - ano_nasc;

    printf("voce tem:%d\n",idade);
    printf("Em 2050 voce tera:%d\n",idade_2050);



    return 0;
}
