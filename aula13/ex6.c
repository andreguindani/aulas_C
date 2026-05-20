// Implementar um algoritmo para multiplicar uma matriz 3x3 por um valor N e
// apresentar como resultado a nova matriz.
#include <stdio.h>

int main(){
    int matriz[3][3],matrizMulti[3][3], i, j, n;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite os numeros da matriz:");
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Quer multiplicar por qual numero:\n");
    scanf("%d", &n);

     for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matrizMulti[i][j] = matriz[i][j] * n;
        }
    }

    printf("Matriz:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
        
    }

    printf("Matriz multiplicada:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \t", matrizMulti[i][j]);
        }
        printf("\n");
        
    }
}