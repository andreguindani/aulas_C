// 4.	Construa um algoritmo que indique quantos dias tem em um mês. Saiba que os meses 4, 6, 9 e 11
//  é subtraído 1 dia (pois possuem 30 dias). O mês 2 devem ser subtraídos 2 dias.
//   Os demais meses possuem 31 dias.
#include <stdio.h>
int main(){
    int i=1;
    while (i<13)
    {
        if (i==4 || i==6 || i==9 || i==11)
        {
            printf("O mes %d tem 30 dias\n", i);
        }else if(i==2){
            printf("O mes %d tem 28 dias\n", i);
        }else{
            printf("O mes %d tem 31 dias\n", i);
        }
        i++;
    }
    
}