#include <bits/stdc++.h>
using namespace std;

// 抽象类，不能被实例化
class Base1
{
  public:
    // 纯虚函数
    virtual void display() const = 0;
};

class Base2: public Base1
{
  public:
    // 覆盖基类的虚函数
    virtual void display() const;
};
void Base2::display() const
{
  cout<<"Base2::display()"<<endl;
}

class Derived: public Base2
{
  public:
    // 覆盖基类的虚函数
    virtual void display() const;
};
void Derived::display() const
{
  cout<<"Derived::display()"<<endl;
}


void fun(Base1 *ptr)
{
  ptr->display();
}


int main()
{
  Base2 base2;
  Derived derived;
  fun(&base2);
  fun(&derived);

  return 0;
}

