#include <stdio.h>
int main()
{
    int idade[4], i, conta = 0;
    for (i = 0; i < 4; i++)
    {
        printf("Informe a idade: ");
        scanf("%d", &idade[i]);
        if (idade[i] >= 18)
            conta++;
    }
    printf("Total: %d alunos\n", conta);
    for (i = 0; i < 4; i++)
    {
        if (idade[i] >= 18)
            printf("Aluno %d: %d anos\n", i, idade[i]);
    }
}
