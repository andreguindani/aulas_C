// 2.	Escreva um programa que pergunte um número ao usuário e mostre sua tabuada completa de 1 a 10.

#include <stdio.h>
int main(){
    int num, i = 1;
    printf("Quer a tabuada de qual numero?\n");
    scanf("%d", &num);
    while (i<11)
    {
        printf("%dx%d=%d\n",num, i, num*i);
        i++;
    }
    
}