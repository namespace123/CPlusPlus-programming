#include<iostream>
using namespace std;
class A
{
  public:
    int x;
    A(int i=10)
    {
      x=i;
      cout<<"A:"<<x<<endl;
    }
};
class B:public A
{
    A a;
    int x2;
  public:
    B(int i):a(i),A(i) 
    {
      x2=i;
      // Ϊʲô����� A::x �� 10�������� 5 �أ�
      cout<<"B:"<<x2<<", "<<A::x<<", "<<a.x<<endl;
    }
};
int main()
{
  B b(5);
  return 0;
}
