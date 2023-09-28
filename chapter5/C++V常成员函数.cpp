#include <bits/stdc++.h>
using namespace std;

class R
{
    int r1, r2;
  public:
    R(int r1, int r2):r1(r1),r2(r2)
    {
    }
    // const还可以用来区别重载函数
    void print() 
    {
    	cout<<"调用非常成员函数"<<endl; 
      cout<<r1<<":"<<r2<<endl;
    }
    void print() const
    {
    	cout<<"调用常成员函数"<<endl; 
      cout<<"const--"<<r1<<":"<<r2<<endl;
    }
};

int main()
{
  R a(5, 4);
  a.print();// 调用一般成员or成员函数函数（一般优先） 
  const R b(20, 52);
  b.print();// b只能调用常成员函数
  return 0;
}

