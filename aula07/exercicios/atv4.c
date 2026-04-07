//4.	Dados um capital, uma taxa de juros mensal e um período em meses, informe o montante ao final de cada mês. 
#include <stdio.h>

int main(){
    float capital, taxa, total, montante;
    int meses, i;
    
    printf("Qual o capital inicial: ");
    scanf("%f", capital);

    printf("Qual a taxa de juros ao mes em porcentagem: ");
    scanf("%f", taxa);

    printf("Qual sera a quantidade de meses: ");
    scanf("%d", meses);

    for (i = 0; i < meses; i++)
    {
        montante = capital * (taxa/100);
        printf("O montante do mes %d e: %f", i, montante);
    }
    

}