#include <bits/stdc++.h>
using namespace std;

class Point
{
    int x;
    int y;
    // ������̬��Ա
    static int count;
  public:
    Point():x(0),y(0)
    {
      count++;
    }
    Point(int x, int y):x(x),y(y)
    {
      count++;
    }
    ~Point()
    {
      count--;
      showCount();
    }
    Point(const Point &p):x(p.x),y(p.y)
    {
      count++;
    }
    int getX() const
    {
      return x;
    }
    int getY() const
    {
      return y;
    }
    // ��̬��Ա����
    static void showCount()
    {
      cout<<"Object count = "<<count<<endl;
    }
};
// ��̬��Ա������������г�ʼ��
int Point::count = 0;

int main()
{
	//��û�о�����������£�����ͨ�����������þ�̬��Ա���� 
  Point::showCount();
  Point p(4,5);
  p.showCount();
  Point a(p);
  a.showCount();
  Point c;
  c.showCount();
  Point::showCount();
  return 0;
}

