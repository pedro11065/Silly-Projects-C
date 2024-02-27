#include <stdio.h>
#include <math.h>
int main(){

    float raio,pi,comprimento,area,volume;

    printf("Qual e o raio da esfera?");
    scanf("%f",&raio);

    pi = 3.14;

    comprimento = 2 * pi * raio;
    area = pi * pow(raio,2);
    volume = 0.25 * pi * pow(raio,3);

    printf("\n O comprimento da esfera e de:%.2f \n",comprimento);
    printf("\n O a area da esfera e de:%.2f \n",area);
    printf("\n O volume da esfera e de:%.2f \n",volume);



}