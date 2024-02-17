//Faça um programa que receba o saãrio de um funcionário, 
//calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.

//ACENTO BUGA

#include <stdio.h>
float main()
{
    float sal, novo_sal;

    printf("digite seu salario atual:");
    scanf("%f",&sal);

    novo_sal = sal/4 + sal;

    printf("Parabens!!! seu novo salario e de:%8.2f",novo_sal);

    return 0;
}






