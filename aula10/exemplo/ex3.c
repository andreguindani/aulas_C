#include <stdio.h>

int main()
{
    int b[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("Valor %d: ", i);
        scanf("%d", &b[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Posicao %d: %d\n",
               i, b[i]);
    }
}
