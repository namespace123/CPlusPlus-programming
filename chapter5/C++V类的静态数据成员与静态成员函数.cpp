#include <bits/stdc++.h>
using namespace std;

class Point
{
    int x;
    int y;
    // 声明静态成员
    static int count;
  public:
    Point():x(0),y(0)
    {
      count++;
    }
    Point(int x, int y):x(x),y(y)
    {
      count++;
    }
    ~Point()
    {
      count--;
      showCount();
    }
    Point(const Point &p):x(p.x),y(p.y)
    {
      count++;
    }
    int getX() const
    {
      return x;
    }
    int getY() const
    {
      return y;
    }
    // 静态成员函数
    static void showCount()
    {
      cout<<"Object count = "<<count<<endl;
    }
};
// 静态成员必须在类外进行初始化
int Point::count = 0;

int main()
{
	//在没有具体对象的情况下，可以通过类名来调用静态成员函数 
  Point::showCount();
  Point p(4,5);
  p.showCount();
  Point a(p);
  a.showCount();
  Point c;
  c.showCount();
  Point::showCount();
  return 0;
}

