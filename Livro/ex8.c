#include <stdio.h>
int main(){
    float peso;

    printf("Qual e seu peso atual em kilos?: ");
    scanf("%f",&peso);

    peso = peso * 1000;

    printf("Seu peso em gramas e de %.2f g",peso);

}