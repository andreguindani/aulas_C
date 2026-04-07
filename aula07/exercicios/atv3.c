//3.	Dadas às idades dos pacientes de uma clínica, informe a idade daquele mais idoso. 
//Considere que todas as idades são distintas e que o número de pacientes é informado pelo usuário, no momento da execução do programa.
#include <stdio.h>
int main(){
    int i, idade, pacientes, maioridade = 0;
    printf("Qual e a quantidade de pacientes: ");
    scanf("%d", &pacientes);
    for (i = 1; i <= pacientes; i++)
    {
        printf("Qual é a idade do paciente:");
        scanf("%d", idade);
        if (idade > maioridade)
        {
            maioridade = idade;
        }
    }
    printf("O paciente mais idoso e: %d", maioridade);
    
}