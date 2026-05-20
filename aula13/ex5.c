// Faça um algoritmo que leia duas matrizes inteiras de ordem 4 e verifique se a soma
// dos elementos das diagonais principais são iguais.

#include <stdio.h>

int main() {
    int matrizA[4][4], matrizB[4][4];
    int i, j;
    int somaA = 0, somaB = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite os numeros da matriz A [%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);

            if (i == j) {
                somaA += matrizA[i][j];
            }
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite os numeros da matriz B [%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);

            if (i == j) {
                somaB += matrizB[i][j];
            }
        }
    }

    printf("\nSoma da diagonal principal da matriz A: %d\n", somaA);
    printf("Soma da diagonal principal da matriz B: %d\n", somaB);

    if (somaA == somaB) {
        printf("As somas das diagonais principais sao iguais.\n");
    } else {
        printf("As somas das diagonais principais sao diferentes.\n");
    }

    return 0;
}
  