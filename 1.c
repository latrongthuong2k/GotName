#include <stdio.h>
struct no1 
{
    public:
     int x, y;
};
struct no1 g;
int main ()
{
    g.x = 2;
    g.y = 3;
    printf("X =%d",g.x);
    printf("Y =%d",g.y);
    return 0;
}
