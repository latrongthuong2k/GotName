#include <iostream>
using namespace std;

struct vector2
{
public:
    void setx(int ix){x = ix;}
    void sety(int iy){y = iy;}
    void setz(int iz){z = iz;}
    int getx(){return x;}
    int gety(){return y;}
    int getz(){return z;}
private:
    int x, y, z;
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
    printf("Enter integer value z = "); scanf("%d", &t);
    v.setz(t);
    printf("x = %d, y = %d, z = %d", v.getx(), v.gety(), v.getz());
    return 0;
}