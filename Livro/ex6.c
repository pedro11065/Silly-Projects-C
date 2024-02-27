#include <stdio.h>

int main()
{
    float salario,
    valor_venda,valor_venda_comis,venda_no_comis,valor_final,comissao,
    salario_final,comissao_final;

    int quant_vendas,i;

    printf("Qual e o seu salario fixo?");
    scanf("%f",&salario);

    printf("voce efetuou quantas vendas?");
    scanf("%d",&quant_vendas);

    comissao = 4.0;

    for (i = 0; i <= quant_vendas - 1; i++) //i = i + 1
        {
        printf ("qual foi o valor da venda?: ");
        scanf("%f",&valor_venda);
        venda_no_comis += valor_venda;
        valor_venda_comis = (valor_venda/100) * (100.00 + comissao);
        valor_final += valor_venda_comis;
        }
        
    salario_final = salario + (valor_final - venda_no_comis);
    comissao_final = valor_final - venda_no_comis;

    printf("\n O seu salario final vai ser de:R$%2.f \n",salario_final);
    printf("O somente de comissao foi o valor de: R$%.2f",comissao_final);
    

} 