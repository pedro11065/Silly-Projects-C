#include <stdio.h>

int main() {
    int num_horas, sal_min, val_hora, imp, imp_valor, sal_bruto, sal_final;

    printf("Quantas horas voc� trabalhou? ");
    scanf("%d", &num_horas);

    printf("Qual � o sal�rio m�nimo? ");
    scanf("%d", &sal_min);

    val_hora = sal_min / 2;
    sal_bruto = num_horas * val_hora;
    imp = 3;
    imp_valor = (sal_bruto * imp) / 100;
    sal_final = sal_bruto - imp_valor;

    printf("Voc� ir� receber: R$%d\n", sal_final);

    return 0;
}









