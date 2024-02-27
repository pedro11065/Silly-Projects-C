#include <stdio.h>
int main(){
    
    float salario,salario_min,relacao;

    printf("Quanto voce recebe?");
    scanf("%f",&salario);

    salario_min = 1412.00;

    relacao = salario/salario_min;

    printf("O seu salario equivale a %.2f vezes o salario minimo.",relacao);
}