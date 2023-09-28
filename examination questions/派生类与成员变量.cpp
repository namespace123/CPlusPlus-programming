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
      // 为什么这里的 A::x 是 10，而不是 5 呢？
      cout<<"B:"<<x2<<", "<<A::x<<", "<<a.x<<endl;
    }
};
int main()
{
  B b(5);
  return 0;
}
