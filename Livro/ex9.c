#include <stdio.h>
int main(){
    float base_maior,base_menor,altura,area;

    printf("Qual e o tamanho da base menor?");
    scanf("%f",&base_menor);

    printf("Qual e o tamanho da base maior?");
    scanf("%f",&base_maior);

    printf("Qual e a altura desse trapezio?");
    scanf("%f",&altura);

    area = ((base_maior + base_menor)*altura)/2;

    printf("A Area desse trapezio e de: %.2f centimetros quadrados",area);
}