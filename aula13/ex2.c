// Crie um algoritmo que leia os elementos de uma matriz e 4x4 e escreva os elementos
// da diagonal principal.

#include <stdio.h>

int main(){
    int matriz[4][4], i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Digite os numeros da matriz:");
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("A diagonal da matriz é:");
        for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i==j)
            {
                printf("%d \n", matriz[i][j]);
            }
            
        }
    }
    
}