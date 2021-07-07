#include <iostream>
using namespace std;

struct vector2
{
public:
    int x, y;
};

typedef struct vector2 vt;


int main ()
{
    vt v;
    printf("Enter integer value x = "); scanf("%d", &v.x);
    printf("Enter integer value y = "); scanf("%d", &v.y);
    printf("x = %d, y = %d", v.x, v.y);
    return 0;
}