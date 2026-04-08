// 2. Entrar com a idade de várias pessoas e imprimir:
// • Total de pessoas com menos de 21 anos.
// • Total de pessoas com mais de 50 anos.

#include <stdio.h>

int main(){
    int i=0, j=0, idade;

    while (1)
    {
        printf("Digite uma idade: (0 para sair)");
        scanf("%d", &idade);

        if (idade == 0)
        {
            break;
        }
        

        if (idade < 21)
        {
            i++;
        }else if (idade > 50)
        {
            j++;
        }
    }

    printf("O numero de pessoas com menos de 21 anos e: %d", i);
    printf("O numero de pessoas maiores de 50 e: %d", j);
    
}