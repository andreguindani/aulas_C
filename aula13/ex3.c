// Entrar com valores para a matriz A[3][4]. Gerar e imprimir uma matriz B com o triplo
// da matriz A.

#include <stdio.h>

int main(){
    int matrizA[3][4], matrizB[3][4], i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Digite os numeros da matriz:");
            scanf("%d", &matrizA[i][j]);
        }
    }
        for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            matrizB[i][j]= matrizA[i][j] * 3;
        }
    }
     printf("Matriz A:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d \t", matrizA[i][j]);
        }
        printf("\n");
        
    }
    printf("Matriz B:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d \t", matrizB[i][j]);
        }
        printf("\n");
        
    }
}