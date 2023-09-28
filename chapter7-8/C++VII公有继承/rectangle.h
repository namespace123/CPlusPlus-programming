#include <bits/stdc++.h>
#include "point.h"
using namespace std;

class Rectangle: public Point
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
};

