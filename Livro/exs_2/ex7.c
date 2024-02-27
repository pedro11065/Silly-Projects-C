/* Faça um programa que receba o salário base de um funcinário, calcule e mostre o seu salário a receber,
sabendo-se que o funcionário tem gratficação de R$50 e paga imposto de 10% sobre o salário base.*/

#include <stdio.h>
int main()
{
    float sal_base, bonus, imposto, sal_final, sal_imposto;

    printf("Qual e o seu salario base? ");
    scanf("%f",&sal_base);

    bonus = 50;
    imposto = 10;

    sal_final = ((sal_base/100) * imposto) + bonus + sal_base;

    sal_imposto = ((sal_base/100) * imposto);

    printf("Voce pagara de imposto:R$%8.2f\n",sal_imposto);

    printf("O seu salario sera de: R$%8.2f\n",sal_final);


    return 0;
}