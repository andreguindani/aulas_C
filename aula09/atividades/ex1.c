// 1. Ler vários números e informar quantos números entre 100 e 200 foram digitados.
// Quando o valor 0 for lido, o algoritmo deverá cessar sua execução.

#include <stdio.h>

int main(){
    int num, i=0, j;
    int numeros[100];

    while (1)
    {
        printf("Digite um numero: (0 para finalizar)");
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }

        if (num >= 100 && num <=200)
        {
            numeros[i] = num;
            j++;
        }
        
        i++;
    }

    printf("Os valores entre 100 e 200 sao: %d", j);
    

}