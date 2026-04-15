// 2. Faça um algoritmo que leia 10 elementos e mostre o menor elemento e a posição
// em que ele foi encontrado.

#include <stdio.h>

int main(){
    int vetor[10], i, menor = 100000, posicao;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);

        if (vetor[i] < menor)
        {
            menor = vetor[i];
            posicao = i+1;
        }
        
    }
    printf("O menor numero e: %d", menor);
    printf("A posição e: %d", posicao);
    
}