#ifndef _POINT_H_
#define _POINT_H_

class Point
{
    int x;
    int y;
  public:
    Point():x(0),y(0) {}
    Point(int x, int y):x(x),y(y) {}
    Point(const Point &p):x(p.x),y(p.y)
    {
    }
    ~Point()
    {
    }
    int getX() const
    {
      return x;
    }
    int getY() const
    {
      return y;
    }
    void move(int newX, int newY);
};

#endif

