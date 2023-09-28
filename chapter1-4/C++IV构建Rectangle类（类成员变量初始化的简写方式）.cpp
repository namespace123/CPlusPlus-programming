#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
  private:
    int left;
    int bottom;
    int right;
    int top;
  public:
    Rectangle();  //Ĭ�Ϲ��캯��
    Rectangle(int left, int bottom, int right, int top);
    ~Rectangle();
    int getLeft() const
    {
      return left;
    }
    int getRight() const
    {
      return right;
    }
    int getBottom() const
    {
      return bottom;
    }
    int getTop() const
    {
      return top;
    }

    void setLeft(int left)
    {
      left = left;
    }
    void setRight(int right)
    {
      right = right;
    }
    void setBottom(int bottom)
    {
      bottom = bottom;
    }
    void setTop(int top)
    {
      top = top;
    }
    int getArea() const
    {
      return (top - bottom) * (right - left);
    }
};
//Rectangle::Rectangle(int left, int bottom, int right, int top)
//{
//  this->left = left;
//  this->bottom = bottom;
//  this->right = right;
//  this->top = top;
//  cout<<"������һ�������Σ�"<<endl;
//}

Rectangle::Rectangle():left(0), bottom(0), right(0), top(0) {}   //Ĭ�Ϲ��캯�������ó�ʼֵ

//���ܵ�ͬ����һ�ι��캯������
Rectangle::Rectangle(int left, int bottom, int right, int top):
  left(left), bottom(bottom), right(right), top(top)
{
  cout<<"������һ�������Σ�"<<endl;
}

Rectangle::~Rectangle()
{
  cout<<"������һ�������Σ�"<<endl;
}

int main()
{
  Rectangle rec(12, 35, 15, 40);
  cout<<"Area: "<<rec.getArea()<<endl;
  Rectangle rec2;  // ����һ���������趨���ʼֵ����Ϊǰ�涨����Ĭ�ϵĳ�ʼֵ
  cout<<"Area: "<<rec2.getArea()<<endl;
  return 0;
}

