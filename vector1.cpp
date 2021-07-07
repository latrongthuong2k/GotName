#include <iostream>
using namespace std;

struct vector2
{
public:
    void setx(int ix){x = ix;}
    void sety(int iy){y = iy;}
    int getx(){return x;}
    int gety(){return y;}
private:
    int x, y;
};

typedef struct vector2 vt;

int main ()
{
    vt v;
    int t;
    printf("Enter integer value x = "); scanf("%d", &t);
    v.setx(t);
    printf("Enter integer value y = "); scanf("%d", &t);
    v.sety(t);
    printf("x = %d, y = %d", v.getx(), v.gety());
    return 0;
}