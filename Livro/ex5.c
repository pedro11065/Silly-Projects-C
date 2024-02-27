#include<stdio.h>
int main()
{
    float preco_antes, preco_depois;
    int desconto;

    printf("*** Calculadora de desconto *** \n");
    printf("Digite o preco do produto que vai receber o desconto: ");
    scanf("%f",&preco_antes);

    printf("De quanto sera o desconto? ");
    scanf("%d",&desconto);

    preco_depois = preco_antes - ((preco_antes / 100) * desconto);

    printf("O novo preco sera de:R$ %.2f",preco_depois);
    return 0;
}