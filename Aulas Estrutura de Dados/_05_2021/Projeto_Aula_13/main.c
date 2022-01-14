#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[15]={9,32,44,55,50,20,30,10,60,14,22,35,44,77,90};
    int i;
    int contador;
    int auxiliar;
    int ordenados = 0; //indica que os elementos adjacentes não estão ordenados
    while (ordenados == 0)
    {
        ordenados = 1; //considera todos os elementos ordenados correntes
        for (contador = 0; contador < 14; contador ++)
        {
            if(vetor[contador]> vetor[(contador + 1)]) {
                auxiliar = vetor[contador];
                vetor[contador]=vetor[(contador+1)];
                vetor[(contador+1)] = auxiliar;
                ordenados = 0; //força outra passagem no laço while
            }
        }
    }

    //imprimindo os valores ordenados

    printf("\n");
    for(contador = 0; contador < 15; contador ++)
        printf("%d ", vetor[contador]);
        printf("\n");
    return 0;
}
