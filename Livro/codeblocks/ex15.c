/*
O custo ao consumidor de um carro � a soma do pre�o de f�brica com o percentual de lucro do
distribuidor e dos impostos aplicados ao pre�o de f�brica. Fa�a um programa que receba o
pre�o de f�brica de um ve�culo, o percentual de lucro do distribuidor e o percentual de impostos,
calcule e mostre:

O valor correspondente ao lucro do distribuidor;
o valor correspondente aos impostos;
o pre�o final do ve�culo.
*/
//consumidor = fabrica + lucro_dis + imp_fabrica

#include <stdio.h>
int main()
{

    float valor_consumidor,
        lucro_in,
        imp_fabrica_in,valor_fabrica_in,
        lucro_out,imp_fabrica_out,valor_final;


    printf("Qual e o preco de fabrica?");
    scanf("%f",&valor_fabrica_in);

    printf("Qual e o percentual de lucro da distribuidora?");
    scanf("%f",&lucro_in);

    printf("Qual e o percentual de imposto?");
    scanf("%f",&imp_fabrica_in);

    lucro_out = valor_fabrica_in/100 * lucro_in;
    imp_fabrica_out = valor_fabrica_in/100 * imp_fabrica_in;
    valor_final = valor_fabrica_in + imp_fabrica_out + lucro_out;

    printf("O lucro da distribuidora sera de:R$%.2f\n",lucro_out);
    printf("O valor correspondente a imposto foi de:R$%.2f\n",imp_fabrica_out);
    printf("O valor final para o consumidor final sera de:R$%.2f\n",valor_final);
    return 0;
}
