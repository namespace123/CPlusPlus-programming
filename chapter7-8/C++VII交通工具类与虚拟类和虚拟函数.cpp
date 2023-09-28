#include <iostream>
using namespace std;

class Vehicle
{
  public:
    int maxSpeed;
    int weight;
    // 虚函数是实现动态多态性的基础
    virtual void stop()
    {
      cout<<"Vehicle stop..."<<endl;
    }
    virtual void run()
    {
      cout<<"Vehicle run..."<<endl;
    }
};

// 不加 virtual，Motorcycle类中关于最基类的两个成员就会有二义性
// 虚基类解决的是类成员标识二义性和信息冗余的问题
class Bicycle: virtual public Vehicle
{
  public:
    int height;
    void stop()
    {
      cout<<"Bicycle stop..."<<endl;
    }
    void run()
    {
      cout<<"Bicycle run..."<<endl;
    }
};

// 轿车
class Motorcar: virtual public Vehicle
{
  public:
    int seatNum;
    void stop()
    {
      cout<<"Motorcar stop..."<<endl;
    }
    void run()
    {
      cout<<"Motorcar run..."<<endl;
    }
};

// 摩托车
class Motorcycle:public Bicycle, public Motorcar
{
  public:
    void stop()
    {
      cout<<"Motorcycle stop..."<<endl;
    }
    void run()
    {
      cout<<"Motorcycle run..."<<endl;
    }

};
int main()
{

  Vehicle v;
  v.run();
  v.stop();
  Bicycle b;
  b.run();
  b.stop();
  Motorcar mo;
  mo.run();
  mo.stop();
  Motorcycle mc;
  mc.run();
  mc.stop();


  Vehicle* vp = &v;
  vp->run();
  vp->stop();
  vp = &b;
  vp->run();
  vp->stop();
  vp = &mo;
  vp->run();
  vp->stop();
  vp = &mc;
  vp->run();
  vp->stop();
  return 0;
}

