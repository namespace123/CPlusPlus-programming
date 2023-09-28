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
//    �˶δ��룺��㸴�Ƶ�Ч��
//    ArrayOfPoints(ArrayOfPoints &a)
//    {
//      size = a.size;
//      points = new Point[size];
//      for(int i = 0; i < size; i++)
//      {
//        points[i] = a.points[i];
//      }
//    }
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

int main()
{
  ArrayOfPoints points(2);
  points.element(0).move(5, 0);
  points.element(1).move(15, 20);

  // ����Ĭ�ϵĿ������캯������ǳ�㸴��
  ArrayOfPoints points2(points);
  points.element(0).move(0, 5);
  points.element(1).move(20, 15);
  // �ı��һ���㣬ǳ�㿽���ĵڶ�����Ҳ�ı���
  cout<<points2.element(1).getX()<<", "<<points2.element(1).getY()<<endl;




  return 0;
}

