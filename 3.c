#include <stdio.h>

void Getnum (int *x, int *y, int *z)
{
    printf("Get x = "); scanf("%d", x);
    printf("Get y = "); scanf("%d", y);
    printf("Get z = "); scanf("%d", z);
}

void Output (int x, int y, int z)
{
    printf("x = %d, y = %d, z = %d", x, y, z);
}

int main ()
{
    int x, y, z;
    Getnum(&x, &y, &z);
    Output(x, y, z);
    return 0;
}