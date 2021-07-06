#include <stdio.h>

struct no3
{
    int x;
    int y;
    int z;
};

typedef struct no3 No3;

void Set (No3 *d)
{
    
    printf("Set x = "); scanf("%d", &d->x);
    printf("Set y = "); scanf("%d", &d->y);
    printf("Set z = "); scanf("%d", &d->z);
}

void Output (No3 d)
{
    printf("x = %d, y = %d, z = %d", d.x, d.y, d.z);
}

int main ()
{
    No3 d;
    Set(&d);
    Output(d);
    return 0;
}
