// 系统类库头文件用<>,自定义头文件用""
// 用<>会直接到安装目录的include子目录下查找，""则会优先在当前目录下查找
// 系统类库头文件通常不带.h,自定义的通常带.h
#include "Point.h"
#include <iostream>
using namespace std;

int Point::count = 0;
Point::Point(const Point &p):x(p.x),y(p.y)
{
  count++;
}
void Point::showCount()
{
  cout<<"Object count="<<count<<endl;
}

int main()
{
  Point a(4, 5);
  cout<<"Point A:"<<a.getX()<<","<<a.getY()<<endl;
  Point::showCount();
  Point b(a);
  cout<<"Point B:"<<b.getX()<<","<<b.getY()<<endl;
  Point::showCount();
  return 0;
}

