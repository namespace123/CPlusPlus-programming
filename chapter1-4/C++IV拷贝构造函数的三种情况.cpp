#include <bits/stdc++.h>
using namespace std;

class Point
{
    int x;
    int y;
  public:
    Point() = default;
    Point(const Point &p)
    {
      x = p.x;
      y = p.y;
      cout<<"Calling the copy constructor!"<<endl;
    }
    int getX() const
    {
      return x;
    }
    int getY() const
    {
      return y;
    }

};

void fun1(Point p)
{
  cout<<p.getX()<<endl;
}

Point fun2()
{
  Point a;
  return a;
}
int main()
{
  Point a;
  Point b(a); // ���һ����A��ʼ��B����һ�ε��ÿ������캯��
  cout<<b.getX()<<endl;
  fun1(b);  // �����������B��Ϊfun1��ʵ�Σ��ڶ��ε��ÿ������캯��
  // �����������ƽ̨�Ż��������ܲ����ø��ƹ��캯��
  b = fun2();  // ������������ķ���ֵ������󣬺�������ʱ�����ÿ��������������ε��ÿ������캯��
  cout<<b.getX()<<endl;
  return 0;
}

