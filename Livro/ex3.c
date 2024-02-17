//Faça um programa que receba três notas e seus respectivos pesos,
// calcule e mostre a média ponderada dessas notas.

#include <stdio.h>

int main()
{
    int nota1, nota2, nota3;
    float peso1, peso2, peso3;
    float calculo;

    // ACENTO BUGA

    printf("Quanto voce tirou na primeira prova?(numero inteiro): ");
    scanf("%d", &nota1);

    printf("Qual e o peso dessa prova?: ");
    scanf("%f", &peso1);

    printf("Quanto voce tirou na segunda prova?(numero inteiro): ");
    scanf("%d", &nota2);

    printf("Qual e o peso dessa prova?: ");
    scanf("%f", &peso2);

    printf("Quanto voce tirou na terceira prova?(numero inteiro): ");
    scanf("%d", &nota3);

    printf("Qual e o peso dessa prova?: ");
    scanf("%f", &peso3);

    calculo = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3))/(peso1 + peso2 + peso3);

    printf("A sua media ponderada e: %2.2f",calculo);

    return 0;

}