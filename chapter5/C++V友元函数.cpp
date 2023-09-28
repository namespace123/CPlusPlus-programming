#include <bits/stdc++.h>
using namespace std;

class Point
{
    int x;
    int y;
  public:
    Point():x(0),y(0) {}
    Point(int x, int y):x(x),y(y) {}
    ~Point() {}
    Point(const Point &p):x(p.x),y(p.y) {}
    int getX() const
    {
      return x;
    }
    int getY() const
    {
      return y;
    }
    // �ڵ�ǰ���У�������ĳ����������Ϊ��Ԫ����
    friend float dist(Point & a, Point &b);
};
// ���óɱ��ϵͣ����Դ˴�ʹ������&
// �˴����� �����ã��������Ա������õı���ֵ�ı䣬������˷���Ч�ʣ��ֲ��ƻ��䰲ȫ��
float dist(const Point &a, const Point &b)
{
  double x = a.x - b.x;
  double y = a.y - b.y;
  return static_cast<float>(sqrt(x * x + y * y));
}
int main()
{
  Point  p1(3,4), p2;
  cout<<"distance: "<<dist(p1, p2)<<endl;
  return 0;
}

