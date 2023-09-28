#include<iostream>
#include<numeric>
#include<functional>
using namespace std;

int mult(int x, int y)
{
  return x * y;
}
int main()
{
  int a[] = {1, 2, 3, 4, 5};
  const int N = sizeof(a) / sizeof(int);
  // 进行一个累乘，1是初始值
  // 自定义的函数对象
  cout<<accumulate(a, a + N, 1, mult)<<endl;
  // STL提供的标准函数对象（引入functional头文件）
  cout<<accumulate(a, a + N, 1, multiplies<int>())<<endl;
  return 0;
}
