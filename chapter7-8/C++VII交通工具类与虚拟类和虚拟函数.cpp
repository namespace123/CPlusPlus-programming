#include <iostream>
using namespace std;

class Vehicle
{
  public:
    int maxSpeed;
    int weight;
    // �麯����ʵ�ֶ�̬��̬�ԵĻ���
    virtual void stop()
    {
      cout<<"Vehicle stop..."<<endl;
    }
    virtual void run()
    {
      cout<<"Vehicle run..."<<endl;
    }
};

// ���� virtual��Motorcycle���й���������������Ա�ͻ��ж�����
// ��������������Ա��ʶ�����Ժ���Ϣ���������
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

// �γ�
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

// Ħ�г�
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

