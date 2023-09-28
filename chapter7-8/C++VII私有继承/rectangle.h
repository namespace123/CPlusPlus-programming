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
    //�����̳е�ʱ��Ҫ���µ��ã���д
    // �������ڿ��Է���ԭ���кͱ�����Ա��������Ķ����У�����Ҫ��д
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

