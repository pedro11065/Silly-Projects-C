#include <stdio.h>
int main()
{
    int num1,num2,num3,multi;

    printf("Digite um numero:");
    scanf("%d",&num1);

    printf("Digite um numero:");
    scanf("%d",&num2);
    
    printf("Digite um numero:");
    scanf("%d",&num3);

    multi = num1 * num2 * num3;

    printf("%d vezes %d vezes %d e igual a: %d",num1,num2,num3,multi); // mais de uma variavel na mesma printf
    return 0;
}