/* Faça um programa que receba um número positivo e maior que zero, calcule e mostre:

O número digitado ao quadrado
o número digitado ao cubo
a raiz quadrada do número digitado
a raiz cúbica d onúmero digitado

*/

#include <stdio.h>
#include <math.h>

int main() {
    float quadrado, cubo, raiz_quad, raiz_cub, num;

    printf("Digite um número positivo e maior que zero: ");
    scanf("%f", &num);

    quadrado = pow(num, 2);
    cubo = pow(num, 3);
    raiz_quad = sqrt(num);
    raiz_cub = cbrt(num);

    printf("O quadrado desse numero e: %.2f\n", quadrado);
    printf("O cubo desse numero e: %.2f\n", cubo);
    printf("A raiz quadrada desse numero e: %.2f\n", raiz_quad);
    printf("A raiz cubica desse numero e: %.2f\n", raiz_cub);

    return 0;
}
