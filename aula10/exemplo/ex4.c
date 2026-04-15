#include <stdio.h>
int main()
{
    float notas[5], media = 0;
    int i;
    for (i = 0; i < 50; i++)
    {
        printf("Nota aluno %d: ", i);
        scanf("%f", &notas[i]);
        media += notas[i];
    }
    media = media / 50;
    printf("Media: %.2f\n", media);
}
