#include <stdio.h>

int main(){

    float peso,
    peso_15,peso_20;

    printf("Qual e seu peso atual?");
    scanf("%f",&peso);

    peso_15 = peso/100 * (100 + 15);
    peso_20 = peso/100 * (100 - 20);

    printf("\n Caso voce engorde 15 porcento, o seu novo peso sera de %.1f kgs \n",peso_15);
    printf("\n Caso voce emagrece 20 porcento, o seu novo peso sera de %.1f kgs \n",peso_20);
}