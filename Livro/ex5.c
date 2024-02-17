//Faça um programa que receba o salário de um funcionário e o percetual de aumento,
// calcule e mostre o valor do aumento e o novo salario.

// ACENTO BUGA

#include <stdio.h>
float main()
{
    float sal, novo_sal, porcent;


    printf("Digite o seu salario atual: ");
    scanf("%f",&sal);

    printf("De quantos porcento vai ser o aumento?:");
    scanf("%f",&porcent);

    novo_sal = ((sal/100) * porcent) + sal;

    printf("Seu novo salario sera de: R$ %.2f\n", novo_sal);

    return 0;
}