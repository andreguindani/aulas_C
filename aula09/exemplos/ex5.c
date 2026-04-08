#include <stdio.h>
main()
{
    int semana;
    printf("entre com numero de 0 a 6: ");
    scanf("%d", &semana);
    switch (semana)
    {
    case 0:
        printf("domingo");
        break;
    case 1:
        printf("segunda");
        break;
    case 2:
        printf("terca");
        break;
    case 3:
        printf("quarta");
        break;
    case 4:
        printf("quinta");
        break;
    case 5:
        printf("sexta");
        break;
    case 6:
        printf("sabado");
        break;
    default:
        printf("invalido");
    }
}