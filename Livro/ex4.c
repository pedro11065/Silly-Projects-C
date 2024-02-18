#include <stdio.h>
int main()
{
    float nota1,nota2,peso1,peso2,calculo;

    printf("digite a primeira nota:");
    scanf("%f",&nota1);

    printf("digite a segunda nota:");
    scanf("%f",&nota2);

    peso1 = 2;
    peso2 = 3;

    calculo = ((peso1 * nota1)+(peso2 * nota2))/(peso1 + peso2); 

    printf("Sua media e de:%.2f",calculo);

    return 0;
}