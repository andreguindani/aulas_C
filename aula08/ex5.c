// 5.	Escreva um programa que peça um número ‘n’ ao usuário, e que gere um novo ‘n’
// de acordo com as seguintes regras, usar comando while:
// a)	Se n é par, n=n/2
// b)	Se n é impar n=3*n+1
// c)	Imprime n
// d)	O programa deve parar quando n for igual a 1
#include <stdio.h>
int main(){
    int n;
    while (1)
    {
        printf("Diga um numero: (1 para parar)");
        scanf("%d", &n);
        
        if (n==1)
        {
            break;
        }else if (n%2==0)
        {
            n = n/2;
            printf("Agora o numero vale %d\n", n);
        }else if(n%2==1){
            n = 3*n+1;
            printf("Agora o numero vale %d\n", n);
        }
        
        
    }
    
}
