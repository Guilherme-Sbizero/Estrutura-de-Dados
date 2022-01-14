#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *p = &i;

    printf("Endereco em p: %x \n", p);
    printf("Endereco em p + 1 %d \n", p + 1);
    printf("Endereco em p + 2 %d \n", p + 2);
    return 0;
}
