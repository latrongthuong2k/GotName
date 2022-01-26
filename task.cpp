#include <iostream>
using namespace std;

class Mylist {
private:
    int x;
    int y;
public:
    // mondai 1:
        Mylist(int a , int b){
        cout<<" input two variable "<<endl;
        cin>> a>> b;
        this->x = a;
        this->y = b;
    }
    ~Mylist()
    {
    cout<<" mylist is deleted "<< endl;
    }
    
    void display(){
        cout<<"x = "<< x<<endl;
        cout<<"y = "<< y<<endl;
    }
};

// mondai 3 :
class Test
{
public:
    Test()
    {
        printf("Test\n");
    }
    virtual ~Test()
    {
        printf("~Test\n");
    }
};
class Test2 : public Test
{
public:
    Test2()
    {
        printf("Test2\n");
    }
    ~Test2()
    {
        printf("~Test2\n");
    }
};
// mon dai 4:
template <typename L>
L Calc( L a, L b, int type)
{
    float ans = 0;
    switch(type)
    {
        case 0:
            ans = a + b;
            break;
        case 1:
            ans = a - b;
            break;
        case 2:
            ans = a * b;
            break;
        case 3:
            ans = a / b;
            break;
    }
    
    return ans;
}

int main() {
    //1:
    Mylist ml(10,20);
    ml.display();
    // mondai 2:
    int *contro1 = new int;
    char *contro2 = new char[20];
    delete contro1;
    delete [] contro2;
    // mondai 3 :
    Test* t;
    t = new Test2();
    t->~Test();
    delete t;
    
    // mondai 4:
    int ans1;
    float ans2;
    char ans3;
    
    ans1 = Calc<int>(2,5,0);
    ans2 = Calc<float>(10.0f,2.5f,3);
    ans3 = Calc<char>(10,4,2);
    // mondai 5 :
    
    return 0;
}



