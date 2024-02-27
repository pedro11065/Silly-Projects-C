#include <stdio.h>
int main(){
    float area, parede1, parede2, w, w_out;

    printf("Qual e o tamanho da menor parede em metros?");
    scanf("%f",&parede1);
    printf("Qual e o tamanho da parede maior em metros?");
    scanf("%f",&parede2);

    w = 18;
    area = parede1 * parede2;
    w_out = area * w;

    printf("\nPara a iluminacao adequada desse ambiente, sera necessaria a utilizacao de %2.f watts de potencia.",w_out);
}