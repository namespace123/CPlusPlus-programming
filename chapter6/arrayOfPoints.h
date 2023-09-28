#ifndef _ARRAY_OF_POINTS_H_
#define _ARRAY_OF_POINTS_H_

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
      delete[] points;
    }
    Point& element(int index)
    {
      assert(index >= 0 && index < size);
      return points[index];
    }
};


#endif

