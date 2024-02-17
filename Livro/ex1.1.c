//Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses número

#include <stdio.h>
int main()
{   
    int num1,num2,num3,num4; //declarei as variáveis
    int soma;

    //NÃO USE ACENTOS POR QUE BUGA

    printf("Digite um numero: "); // printando
    scanf("%d",&num1); // lendo e dizendo que o valor digitado = num1
    
    printf("Digite um numero: ");
    scanf("%d",&num2);
    printf("Digite um numero: ");
    scanf("%d",&num3);
    
    printf("Digite um numero: ");
    scanf("%d",&num4);

    soma = num1 + num2 + num3 + num4;

    printf("A soma de todos os numeros e igual = %d",soma);

    return 0;
}
