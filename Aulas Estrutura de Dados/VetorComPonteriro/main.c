#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5] = (1, 2, 3, 4, 5);
    int *p = v;

    (for int i = 0; i < 5; i++ ){
        printf("%d \t", p[1]);
    }
    return 0;
}
