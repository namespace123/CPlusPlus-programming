#include <bits/stdc++.h>
using namespace std;

int main()
{
  int i = 0;
  ++i = 3;
//  i++ = 3;  // 编译错误
  cout<<i<<endl; // i = 3;
  
  
   // 前后置优先级相同，但是结合性是从右到左，所以后面的先进行运算
   // 又因为 i++ 返回的是一个右值，不可以在进行前置自增运算，所以报错 
//  ++i++;  // error 
//  ++(i++);   // error

 int j = (++i)++;
  cout<<i<<" "<<j<<endl;   // i = 5 , j = 4
  
  return 0;
}

