#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
/*
1 /
00101100 + 01010101 = 10000001
10110000 + 00001111 = 10111111
2/ 
00101100 + 01010101 = 129
10110000 + 00001111 = 191
3/
char : 1 bytes
int : 2 また 4 bytes
float ：4 bytes
double ：8 bytes

4/
char * : 8 bytes
int * : 8 bytes
float *  : 8 bytes
double * : 8 bytes
5/ 
// ② は実行されます。

6/ 
int main()
{
    int A, B;
    printf("Get A , B \n");
    scanf("%d\n",&A);
    scanf("%d\n",&B);
   if (A % 2 == 0)
   {
       printf(" A + B = %d ", A+B);
   }else
   {
       printf(" A - B = %d ", A-B);
   }
return 0;
}

7/ 
int main()
{
    int A, B;
    bool end = false ;
    printf("Get A , B \n");
    do {
        
        scanf("%d\n",&A);
        scanf("%d\n",&B);
        
       if (A % 2 == 0)
       {
           printf(" A + B = %d\n ", A+B);
       }else
       {
           printf(" A - B = %d\n ", A-B);
       }
   }while ( A< 10 && B<10  );
8/ 
class Point
{
public:
    Point() { Clear(); }

    Clear()
    {
        x = 0;
        y = 0;
        z = 0;
    }
//public:　　＊こちら間違いた、消します 
    int x, y, z;
}

{
    Point point;
    Point nextPoint;

    nextPoint.x = 100;
    nextPoint.y = 30;

    while (1)
    {
        if (point.X < nextPoint.x)
        {
            point.x++;
        }
        else if (point.x > nextPoint.x)
        {
            point.x--;
        }

        if (point.y < nextPoint.y)
        {
            point.y++;
        }
        else if (point.y > nextPointy)
        {
            point.y--;
        }
        printf("pointX = %d\n", point.x);
        printf("pointY = %d\n", point.y);

        if (point.x == nextPoint.x &&
            point.y == nextPoint.y)
        {
            break;
        }
    }
}
*/
