/*Faça um programa que receba o salário base de um funcionário,
calcule e mostre o salário a receber sabendo-se que o funcionário tem 
gratificação de 5% sobre o salário base e paga imposto de 7% sobre este salário. */

//ACENTO BUGA

#include <stdio.h>
int main()
{
    float sal_base, bonus, imposto, sal_bonus, sal_final;
    float print_bonus, print_imposto;

    printf("Qual e o seu salario base? ");
    scanf("%f",&sal_base);

    bonus = 5;
    imposto = 7;

    sal_bonus = (sal_base/100) * bonus + sal_base;
    sal_final = sal_bonus - ((sal_bonus/100) * imposto);

    print_bonus = sal_bonus - sal_base;
    print_imposto = sal_bonus - sal_final;

    printf("A sua gratificao sera de:R$%8.2f\n",print_bonus);

    printf("Voce pagara de imposto:R$%8.2f\n",print_imposto);

    printf("O seu salario sera de: R$%8.2f\n",sal_final);


    return 0;
}