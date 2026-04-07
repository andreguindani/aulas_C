// 1.	Utilizando o laço while, elabore um algoritmo que mostre
//  quais números são ímpares, quando se é percorrida a lista de 1 a 100.

#include <stdio.h>
int main(){
    int num = 1;
    printf("Numeros impares:\n");
    while (num<100)
    {
        printf("%d\n", num);
        num +=2;
    }
    
}