#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opc;

    printf("Digite a opcao 1 -> A ou 2 -> B");
    scanf("%d", &opc);

    switch (opc) {

    case 1:
    printf("A opcao escolhida foi A!");
    break;
    case 2:
    printf("A opcao escohida foi B!");
    break;
    default:
    printf("A opcao digitsda nao eh valida");
    break;
    }
    return 0;
}
