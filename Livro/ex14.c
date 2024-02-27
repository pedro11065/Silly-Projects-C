#include <stdio.h>
int main()
{
    int idade,ano_atual,ano_nasc;  
    float meses,semanas,dias;

    printf("Em que ano estamos?");
    scanf("%d",&ano_atual);

    printf("Que ano voce nasceu?");
    scanf("%d",&ano_nasc); 

    idade = ano_atual - ano_nasc;
    meses = idade * 12;
    semanas = meses * 4.3;
    dias = semanas * 7;

    printf("\n voce tem %d anos \n",idade);
    printf("%.f meses \n",meses);
    printf("%.2f semanas \n",semanas);
    printf("e %.2f dias de vida.",dias);
}