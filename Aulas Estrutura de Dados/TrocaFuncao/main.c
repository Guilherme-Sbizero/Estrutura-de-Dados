#include <stdio.h>
#include <stdlib.h>

void roca (int *a, int *b) {

  int aux;
  aux = *a;
  *a = *b;
  *b = aux;

  printf ("\n Na funcao \n Valor de a: %d \t Valor de b: %d", a, b);
}

int main()
{
    int a = 7, b = 5;

    troca (&a, &b);

    printf("\n Fora da funcao: \n Valor de a: %d \t Valor de b: %d", a, b);

    return 0;
}
