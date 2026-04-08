#include <stdio.h>

int main(){
    int i;
    do {
    printf("Escolha a fruta:\n");
    printf("(1)Mamao (2)Abacaxi(3)Laranja\n");
    scanf("%d", &i);
    } while ((i<1)||(i>3));
    switch (i) {
    case 1: printf("Mamao"); break;
    case 2: printf("Abacaxi"); break;
    case 3: printf("Laranja"); break;
}

}