#include <stdio.h>
#include <string.h>
int main(){
    char str1[20], str2[20];
    printf("Digite uma string: ");
    fgets(str1, 20, stdin);

    str1[strcspn(str1, "\n")] = '\0';
    strcpy(str2, str1);
    printf("String copiadas: %s\n", str2);
    return 0;
}