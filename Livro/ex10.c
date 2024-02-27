#include <stdio.h>
int main()
{
    int lado,area;

    printf("Qual é o tamanho da aresta lateral desse quadrado?");
    scanf("%d",&lado);

    area = lado * lado;

    printf("A area desse quadrado e de %d centimetros quadrados",area);
}