#include <bits/stdc++.h>
using namespace std;

class A
{
    const int a; // 常数据成员
    static const int b;  // 静态常数据成员
  public:
    A(int i);
    void print();
};
const int A::b = 10;
A::A(int i):a(i) {} // 常成员不能在构造函数的函数体中进行赋值
void A::print()
{
  cout<<a<<":"<<b<<endl;
}
int main()
{
  A a1(100), a2(0);
  a1.print();
  a2.print();
  return 0;
}

