#include <bits/stdc++.h>
#include "point.h"
using namespace std;

class ArrayOfPoints
{
    Point *points;
    int size;
  public:
    ArrayOfPoints(int size):size(size)
    {
      points = new Point[size];
    }
    ~ArrayOfPoints()
    {
      cout<<"delete..."<<endl;
      delete[] points;
    }
    Point& element(int index)
    {
      assert(index >= 0 && index < size);
      return points[index];
    }
};

int main()
{
  ArrayOfPoints points(3);
  points.element(0).move(5, 0);
  points.element(1).move(15, 20);
  return 0;
}

