#include <bits/stdc++.h>
using namespace std;

class B
{
  public:
    B() { }
  public:
    int m_iNum;
};
void foo()
{
  const B b1;
  //b1.m_iNum = 100; //compile error
  // 可以做如下转换，体现出转换为指针类型
  B *b2 = const_cast<B*>(&b1);
  // 或者左侧也可以用引用类型，如果对b2或b3的数据成员做改变，就是对b1的值在做改变
  B &b3 = const_cast<B&>(b1);
  b2->m_iNum = 200;    //fine
  cout<<(b1.m_iNum)<<endl;
  b3.m_iNum = 300;    //fine
  cout<<(b1.m_iNum)<<endl;
  // 以下代码编译错误，因为b1是常对象，不可变
//  b1.m_iNum = 100;
  cout<<(b1.m_iNum)<<endl;
}
int main( int argc, char * argv[] )
{
  foo();
  return 0;
}
