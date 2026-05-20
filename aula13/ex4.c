// Fazer um algoritmo que leia uma matriz 5x5 com números inteiros,
// obtenha sua transposta e escreva a matriz resultante.

#include <stdio.h>

int main() {
    int matriz[5][5], matrizInversa[5][5];
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matrizInversa[i][j] = matriz[j][i];
        }
    }

    printf("Matriz Original:");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz Transposta:");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d\t", matrizInversa[i][j]);
        }
        printf("\n");
    }


}