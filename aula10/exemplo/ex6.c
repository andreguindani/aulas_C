#include <stdio.h>
int main()
{
    int vetor[10], i, maior = -1000000;
    for (i = 0; i < 10; i++)
    {
        printf("Valor %d: ", i);
        scanf("%d", &vetor[i]);
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    printf("Maior valor: %d", maior);
}