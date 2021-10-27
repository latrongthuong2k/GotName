# include <iostream>
/*class editor
{
    private:
     int* newArray;      
     int sizeofNumber;

    public:
        editor()
        {
            newArray = nullptr;
        }
        ~editor()
        {
            delete[] newArray;
            newArray = nullptr;
            
        }
        //
    void Create(int numArr)
    {
        newArray = new int[numArr];
        sizeofNumber = numArr;

    }
    int get(int getNumArr) 
    {
        if( sizeofNumber >= 0 && getNumArr < sizeofNumber)
            return newArray[getNumArr];
        else 
            return NULL;
        
    }
    void set(int setNumArr) 
    {
        if( sizeofNumber >= 0 && setNumArr < sizeofNumber)
             newArray[setNumArr] = setNumArr;
        else 
            return;
    }

     
};
int main()
{
    editor test;
    
    test.Create(1000);
    
    for (int i = 0; i < 1000; i++)
        {
            test.set(i);
            
        }
    for (int i = 0; i < 1000; i++)
        {
            
            printf("num = %d\n", test.get(i));
        }
    

}
*/
class Object
{
    public:
        Object()
        {
            x = 1 , y = 1 , z = 1 ;
        }

    private:
     int x ,y ,z;
        virtual void Update(){}

};
class Vehicle : Object
{
    public: Vehicle(){}

         class SpeedUp
        {
            public:
                 SpeedUp()
                {

                }
            private:
        float speed;
        float axcel;
        };
};

class Car : Vehicle
{
    public: 
        Car(){}
        void ChangeSpeed();
    private:

};

void Car::ChangeSpeed()
{

}
