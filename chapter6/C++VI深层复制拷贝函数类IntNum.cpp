#include <bits/stdc++.h>
using namespace std;

class IntNum
{
    int *xptr;
  public:
    IntNum(int x = 0):xptr(new int(x))
    {
      cout<<"construction..."<<endl;
    }
    // 深层复制来复制对象
    // new一个int型变量空间来存放 n.xptr所指向的值
    IntNum(const IntNum & n):xptr(new int(*n.xptr))
    {
      cout<<"copy construction..."<<endl;
    }
    // 移动构造函数
    // 一种浅层复制
    // && ：右值引用，右值：即将消亡的对象
    IntNum(IntNum && n):xptr(n.xptr)
    {
      n.xptr = nullptr;
      cout<<"move construction..."<<endl;
    }
    ~IntNum()
    {
      delete xptr;
      cout<<"delete..."<<endl;
    }
    int getInt()
    {
      return *xptr;
    }
};
IntNum getNum()
{
  IntNum a;
  return a;
}

int main()
{
  cout<<getNum().getInt()<<endl;
  return 0;
}

