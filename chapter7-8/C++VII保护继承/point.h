#ifndef _POINT_H_
#define _POINT_H_

class Point
{
    float x, y;
  public:
    void initPoint(float x = 0, float y = 0)
    {
      this->x = x;
      this->y = y;
    }
    float getX() const
    {
      return x;
    }
    float getY() const
    {
      return y;
    }
    void move(float offX, float offY)
    {
      x += offX;
      y += offY;
    }
};

#endif

