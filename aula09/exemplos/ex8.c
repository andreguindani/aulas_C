#include <stdio.h>
int main(){
    int meses, juros;
    float valor_final, valor_inicial;

    printf("Qual o valor inicial?");
    scanf("%f", &valor_inicial);

    printf("Quantos meses?");
    scanf("%d", &meses);

    switch (meses) {
    case 5: juros++;
    case 4: juros++;
    case 3: juros++;
    case 2: juros++;
    case 1: juros++;
    default: printf("valor inválido");
}
    valor_final = (1 + juros / 100) * valor_inicial;

    printf("O valor final é: %f", valor_final);

}