#include <bits/stdc++.h>
using namespace std;

class Base
{
  public:
    // 设置为virtual时，当派生类重写该函数时，该函数则自动变为虚函数
    void test()
    {
      cout<<"基类方法1！"<<endl;
    }
    // 基类的析构函数必须是虚函数，否则会造成对象释放错误的问题
    virtual ~Base()
    {
    }
};
class Base2
{
  public:
    // 设置为virtual时，当派生类重写该函数时，该函数则自动变为虚函数
    void test2()
    {
      cout<<"基类方法2！"<<endl;
    }
    // 基类的析构函数必须是虚函数，否则会造成对象释放错误的问题
    virtual ~Base2()
    {
    }
};

// 分别以public的方式继承Base和Base2两个类
class Inheriter: public Base, public Base2
{
  public:
    void test()
    {
      cout<<"派生类方法1！"<<endl;
    }
    void test2()
    {
      cout<<"派生类方法2！"<<endl;
    }
};

int main()
{
  Base *p1 = new Base;
  Base *p2 = new Inheriter;
  p1->test();
  p2->test();
  // 虚函数的使用将导致类对象占用更大的内存空间 
  // 派生类所占存储空间 = 所有基类的所有属性成员 + 所有基类的虚函数指针（一个基类有1or0个虚函数指针）+ 派生类本身的属性成员
  cout<<"Base: "<<sizeof(Base)<<", Inheriter: "<<sizeof(Inheriter)<<endl;
  return 0;
}

