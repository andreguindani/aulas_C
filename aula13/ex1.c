// Elabore um algoritmo que leia duas matrizes, A e B do tipo (3x3) e calcule em uma
// matriz R sua multiplicação

#include <stdio.h>
int main(){
    int i, j, matriz1[3][3], matriz2[3][3], multi[3][3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite um elemento da matriz A: ");
            scanf("%d", &matriz1[i][j]);
        }
        
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite um elemento da matriz B: ");
            scanf("%d", &matriz2[i][j]);
        }
        
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            multi[i][j]= matriz1[i][j] * matriz2[i][j];
        }
        
    }

    printf("Matriz A:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \n", matriz1[i][j]);
        }
        
    }
    printf("Matriz B:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \n", matriz2[i][j]);
        }
        
    }
    printf("Matriz multiplicada:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \n", multi[i][j]);
        }
        
    }
    
    
    
}