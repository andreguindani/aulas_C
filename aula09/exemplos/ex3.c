#include <stdio.h>
#define SOMA(x, y) ((x) + (y))
int main()
{
    int a = SOMA(1, 2);
    double b = SOMA(1.0, 2.0);
    printf("a = %d\n", a);
    printf("b = %f\n", b);
    return 0;
}