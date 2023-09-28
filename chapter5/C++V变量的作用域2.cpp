#include <bits/stdc++.h>
using namespace std;

int i = 1;
void other()
{
  // a和b是静态局部变量，静态变量的作用域不会改变，但是生存期更长 
  static int a = 2;
  static int b;
  int c = 10;
  a += 2;
  i += 32;
  c += 5;
  cout<<"--other--"<<endl;
  cout<<"i:"<<i<<", a:"<<a<<", b:"<<b<<", c"<<c<<endl;
  b = a;
}
int main()
{
  static int a;
  int b = -10; 
  int c = 0;
  cout<<"--main--"<<endl;
  cout<<"i:"<<i<<", a:"<<a<<", b:"<<b<<", c"<<c<<endl;
  c += 8;
  other();
  cout<<"--main--"<<endl;
  cout<<"i:"<<i<<", a:"<<a<<", b:"<<b<<", c"<<c<<endl;
  i += 10;
  other();
  return 0;
}

// 第三行输出需要思考一下：主函数中的静态变量 a 和 被调函数中的静态变量 a 不是同一个数 

