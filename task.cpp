#include <stdio.h>

class Object
{
public:
    Object() { x = 0,
               y = 0,
               z = 0; }
    float getX() { return x; }
    float getY() { return y; }
    float getZ() { return z; }

  virtual  void Update() {};

private:
    float x, y, z;
};
class ObjectManager : public Object
{
public:
     void Update(){}
    ObjectManager() {
        speed = 0;
    }
    void setSpeed(float speed);
    float getSpeed() { return speed; }
private:
    float speed;
};
class Car : public ObjectManager
{
public:

    ObjectManager objManager;
    void setSpeed(float speed)
    {
    objManager.setSpeed(speed); 
    }
    virtual void Update();
};
int main()
{
    Car car;
    car.setSpeed(10);

    for (int i = 0; i < 10; i++)
    {
        car.Update();
        printf("update : %d 回\n", i );
    }

}
void ObjectManager::setSpeed(float speed)
{
    this->speed = speed;
}
void Car::Update()
{
    float speed;
    speed = objManager.getSpeed();
}
