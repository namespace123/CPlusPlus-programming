#include <bits/stdc++.h>
using namespace std;

class Point
{
    int x;
    int y;
  public:
    Point();
    Point(int x, int y);
    Point(const Point &p); 
    int getX() const
    {
      return x;
    }
    int getY() const
    {
      return y;
    }

};
Point::Point():x(0),y(0) {}
Point::Point(int x, int y):x(x),y(y) {}
Point::Point(const Point &p)
{
  x = p.x;
  y = p.y;
  cout<<"Calling the copy constructor of Point"<<endl;
}

class Line
{
    Point p1, p2;
    double len;
  public:
    Line(Point xp1, Point xp2);
    Line(const Line &l);
    int getLen() const
    {
      return len;
    }

};

// 组合类的构造函数
Line::Line(Point xp1, Point xp2):p1(xp1),p2(xp2)
{
  cout<<"Calling constructor of Line"<<endl;
  double x = static_cast<double>(p1.getX() - p2.getX());
  double y = static_cast<double>(p1.getY() - p2.getY());
  len = sqrt(x * x + y * y);
}

Line::Line(const Line &l):p1(l.p1), p2(l.p2)
{
  cout<<"Calling the copy constructor of line"<<endl;
  len = l.len;
}

int main()
{
  Point myp1(1, 1), myp2(4, 5);
  Line line(myp1, myp2);    // 调用了四次复制构造函数
  Line line2(line);
  cout<<"The length of the line is "<<line.getLen()<<endl;
  cout<<"The length of the line2 is "<<line2.getLen()<<endl;
  return 0;
}

