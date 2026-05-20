#include <stdio.h>

int main(){
    char palavra[20];
    int i;
    scanf("%s", palavra);
    for (i = 0; palavra[i]!='\0'; i++)
    {
        printf("%c\n", palavra[i]);
    }
    printf("%s\n", palavra);
    return 0;
}
