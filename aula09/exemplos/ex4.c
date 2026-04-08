#include <stdio.h>
main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    switch (num)
    {
    case 9:
        printf("\no numero digitado eh 9");
        break;
    case 10:
        printf("\no numero digitado eh 10");
        break;
    default:
        printf("\nnao eh 9 nem 10");
    }
}
