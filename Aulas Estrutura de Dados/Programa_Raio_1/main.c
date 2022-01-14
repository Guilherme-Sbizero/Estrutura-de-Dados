#include <stdio.h>
#include <stdlib.h>
int main()
{
    float comprimento, raio;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    comprimento = 2 * 3.1416 * raio;

    printf("O comprimento da circunferencia eh: %f", comprimento);

    return 0;
}
