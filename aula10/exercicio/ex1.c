// 1. Faça um algoritmo que leia 10 elementos e mostre o maior elemento.

#include <stdio.h>

int main(){
    int vetor[10], i, maior=0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);

        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        
    }

    printf("O maior valor e: %d", maior);
    
}