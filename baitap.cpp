#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
//　課題１：
/* 
16
79
62

 */

// 課題２：
/*

FF+FF = 510
ed+10 = 253
563 + cd = 1584

*/ 
// 課題３：
/* 

 char = 1byte // -128 to 127
 int = 4 byte // -2,147,483,648 to 2,147,483,647
 float = 4 byte // 3.4E +/- 38 (7 digits)
 double = 8 Byte // 1.7E +/- 308 (15 digits)

 
 */
// 課題４：
/*
    ①　は処理されるです。 
 */
// 課題５：
/*
 int main()
 {
    int count = 0;
    for ( int i = 0; i < 100; i = i + 3)
    {
       count++;
       
    }
    printf("%d",count);
    // 答えは： 34 回
     
 }
*/
// 課題６：

/*
 //答えは：
 int main()
 {
    int i = 0;
    int count = 0;
    while (i<100)
    {
        i = i + 5;
        if (i<=100)
        {
            count++;
        }
    }
     printf("%d", count);
     // 答えは：20回
 }
 　*/
 
// 課題７：
/*
array のサイズは２０です

 */
// 課題８：
/*  
① は２０です。
 */
// 課題９：
/*
 int です。
*/

// 課題10： 
/* 

struct Ten
{
    float x;
    float y;
};

float distance(Ten a, Ten b)
{
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

void Enter (Ten *a, Ten *b)
{
    printf("Ten a:\n");
    printf ("x = "); scanf("%f", &a->x);
    printf ("y = "); scanf("%f", &a->y);
    printf("Ten b:\n");
    printf ("x = "); scanf("%f", &b->x);
    printf ("y = "); scanf("%f", &b->y);
}
int main ()
{
    Ten a, b;
    Enter(&a, &b);
    printf("aとbの距離は: %0.2f", distance(a, b));
    return 0;
}

 */
 

//　課題 11：
/*

struct Card
{
private:
    int card;
    char DOC[10];
public:
    void set_Card(int, char *);
    int get_card();
    char* get_DOC();
};

void Card::set_Card(int t, char *s)
{
    card = t;
    strcpy(DOC, s);
}

int Card::get_card()
{
    return card;
}

char* Card::get_DOC()
{
    return DOC;
}

void Enter(Card c[])
{
    char g[5][10] = {"spade", "diamond", "heart", "club", "joker"};
    for (int i = 0; i < 4; i++)
    for (int j = 0; j < 13; j++)
    {
        c[i*13 + j].set_Card(j + 1, g[i]);
    }
    c[52].set_Card(14, g[4]);
}

void Print (Card c[])
{
    cout << "Print Card shuffle: " << endl;
    char g[3][10] = {"jack", "queen", "king"};
    for (int i = 0; i < 53; i++)
    {
        if (c[i].get_card() == 1) cout << "ace " << c[i].get_DOC() << endl;
        else
        if (c[i].get_card() <= 10) cout << c[i].get_card() << " " << c[i].get_DOC() << endl;
        else
            cout << g[c[i].get_card() - 11] << " " << c[i].get_DOC() << endl;
    }
}

int main ()
{
    Card c[53];
    Enter(c);
    random_shuffle(&c[0], &c[52]);
    Print(c);
    return 0;
}

*/

