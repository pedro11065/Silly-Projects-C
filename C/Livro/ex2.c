// Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas.

#include <stdio.h>

int main()
{
    int nota1, nota2, nota3;
    float calculo;

    printf("Quanto voce tirou na primeira prova?");
    scanf("%d", &nota1);

    printf("Quanto voce tirou na primeira prova?");
    scanf("%d", &nota2);

    printf("Quanto voce tirou na primeira prova?");
    scanf("%d", &nota3);

    calculo = (nota1 + nota2 + nota3)/3.0;

    printf("A sua media e de: %1.2f",calculo);

    return 0;


}