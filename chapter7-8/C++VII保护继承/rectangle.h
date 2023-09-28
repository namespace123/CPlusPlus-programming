#include <bits/stdc++.h>
#include "point.h"
using namespace std;

class Rectangle: private Point
{
    float w, h;
  public:
    void initRectangle(float x, float y, float w, float h)
    {
      initPoint(x, y);
      this->w = w;
      this->h = h;
    }
    float getH() const
    {
      return h;
    }
    float getW() const
    {
      return w;
    }
    //私有继承的时候，要重写 
    float getX() const
    {
      return Point::getX();
    }
    float getY() const
    {
      return Point::getY();
    }
    void move(float offX, float offY)
    {
    	Point::move(offX, offY);
    }
};

