#include <bits/stdc++.h>
using namespace std;

class Base
{
  public:
    virtual void f1(int) const;
};
void Base::f1(int) const
{
  cout<<"Base::f1()"<<endl;
}


class Derived: public Base
{
  public:
    // 此处如果缺了这个const，就会被系统识别为 重载函数
    // 为避免无意中将重写函数写错，导致意料之外的结果，采用override（重写） 
    void f1(int) const override;
};
void Derived::f1(int) const
{
  cout<<"Derived::f1()"<<endl;
}

int main()
{
  Base *b;
  b = new Base;
  b->f1(1);
  b = new Derived;
  b->f1(1);
  return 0;
}

