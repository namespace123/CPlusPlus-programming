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
    Rectangle();  //默认构造函数
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
//  cout<<"构造了一个长方形！"<<endl;
//}

Rectangle::Rectangle():left(0), bottom(0), right(0), top(0) {}   //默认构造函数，设置初始值

//功能等同于上一段构造函数代码
Rectangle::Rectangle(int left, int bottom, int right, int top):
  left(left), bottom(bottom), right(right), top(top)
{
  cout<<"构造了一个长方形！"<<endl;
}

Rectangle::~Rectangle()
{
  cout<<"构析了一个长方形！"<<endl;
}

int main()
{
  Rectangle rec(12, 35, 15, 40);
  cout<<"Area: "<<rec.getArea()<<endl;
  Rectangle rec2;  // 定义一个对象，无需定义初始值，因为前面定义了默认的初始值
  cout<<"Area: "<<rec2.getArea()<<endl;
  return 0;
}

