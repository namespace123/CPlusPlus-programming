#include <bits/stdc++.h>
#include "point.h"
using namespace std;

class Rectangle: protected Point
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
    //保护继承的时候，要重新调用，重写
    // 派生类内可以访问原共有和保护成员，但类外的对象不行，所以要重写
    float getX2() const
    {
      return getX();
    }
    float getY2() const
    {
      return getY();
    }
    void move2(float offX, float offY)
    {
      move(offX, offY);
    }
};

