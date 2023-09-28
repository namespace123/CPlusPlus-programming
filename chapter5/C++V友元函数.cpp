#include <bits/stdc++.h>
using namespace std;

class Point
{
    int x;
    int y;
  public:
    Point():x(0),y(0) {}
    Point(int x, int y):x(x),y(y) {}
    ~Point() {}
    Point(const Point &p):x(p.x),y(p.y) {}
    int getX() const
    {
      return x;
    }
    int getY() const
    {
      return y;
    }
    // 在当前类中，将外界的某个函数声明为友元函数
    friend float dist(Point & a, Point &b);
};
// 引用成本较低，所以此处使用引用&
// 此处采用 常引用，这样可以避免引用的变量值改变，既提高了访问效率，又不破坏其安全性
float dist(const Point &a, const Point &b)
{
  double x = a.x - b.x;
  double y = a.y - b.y;
  return static_cast<float>(sqrt(x * x + y * y));
}
int main()
{
  Point  p1(3,4), p2;
  cout<<"distance: "<<dist(p1, p2)<<endl;
  return 0;
}

