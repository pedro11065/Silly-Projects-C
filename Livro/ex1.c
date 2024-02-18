//Faça um programa que receba dois números, 
//calcule e mostre a subtração do primeiro número pelo segundo.

#include <stdio.h>
int main()
{
    int num1,num2,sub;

    printf("Digite um numero:");
    scanf("%d",&num1);
    
    printf("Digite outro numero:");
    scanf("%d",&num2);

    sub = num1 - num2;

    printf("A subtracao do primeiro numero e igual a: %d",sub);

    return 0;
}
