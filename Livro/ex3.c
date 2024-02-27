#include <stdio.h>
int main()
{
    float num1,num2,div;
    printf("digite um numero: ");
    scanf("%f",&num1);

    printf("digite um numero: ");
    scanf("%f",&num2);

    div = num1 / num2;

    printf("%.2f divido por %.2f e igual a: %.2f",num1,num2,div);
    
    return 0;
}