#include <stdio.h>

int main(){
    char nome[50];
    printf("Digite seu nome:");
    fgets(nome, 50, stdin);
    printf("Seu nome e: %s", nome);
    return 0;
}