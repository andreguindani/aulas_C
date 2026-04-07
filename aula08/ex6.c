// 6.	A conversão de graus Fahrenheit para centígrados é obtida pela fórmula: 
// C = 5 / 9 ( F – 32 )
// Escreva um algoritmo que calcule e escreva uma tabela de graus centígrados em função de
// graus Fahrenheit que variem de 50 a 150 de 1 em 1.
#include <stdio.h>

int main() {
    int f;
    float c;

    for (f = 50; f <= 150; f++) {
        c = (5.0 / 9) * (f - 32);
        printf("F: %d -> C: %f\n", f, c);
    }

    return 0;
}