#include<iostream>
#include<numeric>
using namespace std;

class MultClass
{
  public:
    // 重载函数调用运算符
    int operator() (int x, int y) const
    {
      return x * y;
    }
};

int mult(int x, int y)
{
  return x * y;
}
int main()
{
  int a[] = {1, 2, 3, 4, 5};
  const int N = sizeof(a) / sizeof(int);
  // 进行一个累乘，1是初始值
  cout<<accumulate(a, a + N, 1, MultClass())<<endl;
  return 0;
}

