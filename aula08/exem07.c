#include <stdio.h>
int main()
{
    int soma = 0, parcela;

    do
    {
        printf("numero (0 p/ sair): ");
        scanf("%d", &parcela);
        soma += parcela;

    } while (parcela != 0);

    printf("Soma: %d\n", soma);
}