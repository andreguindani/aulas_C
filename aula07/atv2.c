//2.	Dadas às notas dos alunos de uma turma, informe a média da turma.
#include <stdio.h>

int main(){
    int i, n;
    float nota, media;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Qual a nota do aluno? ");
        scanf("%f",  &nota);
        media += nota;
    }
    media = media/n;
    printf("A nota media da turma e: %f", media);
    
}