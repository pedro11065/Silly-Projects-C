#include <stdio.h>
#include <math.h>

int main() {
    double raio, area;

    printf("Qual e o valor do raio?: ");
    scanf("%lf", &raio);

    area = M_PI * pow(raio, 2);

    printf("A area do circulo com raio %.2lf e %.2lf\n", raio, area);

    return 0;
}
