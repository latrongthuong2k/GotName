#include <stdio.h>

void Getnum (int *x, int *y)
{
    
    printf("Get x = "); scanf("%d", x);
    printf("Get y = "); scanf("%d", y);
}

void Ouput (int x, int y)
{
    printf("x = %d, y = %d", x, y);
}

int main ()
{
    int x, y;
    Getnum(&x, &y);
    Output(x, y);
    return 0;
}