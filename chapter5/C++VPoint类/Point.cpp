// ϵͳ���ͷ�ļ���<>,�Զ���ͷ�ļ���""
// ��<>��ֱ�ӵ���װĿ¼��include��Ŀ¼�²��ң�""��������ڵ�ǰĿ¼�²���
// ϵͳ���ͷ�ļ�ͨ������.h,�Զ����ͨ����.h
#include "Point.h"
#include <iostream>
using namespace std;

int Point::count = 0;
Point::Point(const Point &p):x(p.x),y(p.y)
{
  count++;
}
void Point::showCount()
{
  cout<<"Object count="<<count<<endl;
}

int main()
{
  Point a(4, 5);
  cout<<"Point A:"<<a.getX()<<","<<a.getY()<<endl;
  Point::showCount();
  Point b(a);
  cout<<"Point B:"<<b.getX()<<","<<b.getY()<<endl;
  Point::showCount();
  return 0;
}

