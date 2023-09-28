#include <bits/stdc++.h>
using namespace std;

class Point
{
    int x;
    int y;
  public:
    Point() = default;
    Point(const Point &p)
    {
      x = p.x;
      y = p.y;
      cout<<"Calling the copy constructor!"<<endl;
    }
    int getX() const
    {
      return x;
    }
    int getY() const
    {
      return y;
    }

};

void fun1(Point p)
{
  cout<<p.getX()<<endl;
}

Point fun2()
{
  Point a;
  return a;
}
int main()
{
  Point a;
  Point b(a); // 情况一，用A初始化B，第一次调用拷贝构造函数
  cout<<b.getX()<<endl;
  fun1(b);  // 情况二，对象B作为fun1的实参，第二次调用拷贝构造函数
  // 情况三，部分平台优化过，可能不调用复制构造函数
  b = fun2();  // 情况三，函数的返回值是类对象，函数返回时，调用拷贝函数，第三次调用拷贝构造函数
  cout<<b.getX()<<endl;
  return 0;
}

