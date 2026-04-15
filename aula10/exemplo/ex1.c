#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    float b[5];
    b[0] = 2;
    b[2] = 5;
    b[1] = b[0] - b[2];
    b[3] = pow(b[2], 2);
    b[4] = b[3] - 1;
    for (i = 0; i < 5; i++)
    {
        printf("%f\n", b[i]);
    }
}