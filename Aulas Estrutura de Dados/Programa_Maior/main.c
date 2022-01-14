#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if (a > b) {
        printf("O valor de A eh o maior!");
    }

    else if (a < b) {
        printf("O valor de B eho maior!");
    }

    else {
        printf("A e B sao iguais!");
    }

    return 0;
}
