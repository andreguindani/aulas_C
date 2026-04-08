// 3. Entrar com um número da conta e o saldo de várias pessoas. Imprimir todas as
// contas, os respectivos saldos e uma das mensagens: positivo ou negativo. Ao final, o
// percentual de pessoas com saldo negativo. O algoritmo acaba quando se digita um
// número negativo para a conta

#include <stdio.h>

int main(){
    int num_conta, vetor_conta[100], total_pessoas = 0, total_negativo, i=0, j=0;
    float saldo_conta, vetor_saldo[100], percentual;

    while (1)
    {
        printf("Digite o numero da conta: (numero negativo para finalizar)");
        scanf("%d", &num_conta);

        if (num_conta < 0)
        {
            break;
        }
        
        vetor_conta[i] = num_conta; 

        total_pessoas++;

        printf("Digite o saldo da conta:");
        scanf("%f", &saldo_conta);
        vetor_saldo[i] = saldo_conta;
        
        if (saldo_conta < 0)
        {
            total_negativo++;
        }
        
        i++;
        
    }

    percentual = (total_negativo/total_pessoas) * 100;
    printf("O percentual de pessoas negativos e: %f", percentual);

    for (j = 0; j < i; j++)
    {
        printf("Numero da conta: %d", vetor_conta[j]);
        printf("Saldo da conta: %f", vetor_saldo[j]);
        if (vetor_saldo[j] < 0)
        {
            printf("O saldo da conta é negativo");
        }else{
            printf("O saldo da conta é positivo");
        }
        
    }
    
    
}