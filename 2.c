#include <stdio.h>

struct no2
{
    int x;
    int y;
};

typedef struct no2 No2;

void Set (No2*d)
{
    
    printf("Set x = "); scanf("%d", &d->x);
    printf("Set y = "); scanf("%d", &d->y);
}

void Output (No2 d)
{
    printf("x = %d, y = %d", d.x, d.y);
}

int main ()
{
    No2 d;
    Set(&d);
    Output(d);
    return 0;
}
