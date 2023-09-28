#include <bits/stdc++.h>
using namespace std;

int main()
{
//  char* b = "afah";
  char a[40];
  // 字符串转char*的两种方式
//  strcpy(a, b);
  strcpy(a, "jhkfjh");
  cout<<a<<endl;


// 强制转换时必须注意。转换类型之间的大小差别
  int arr[] = {1, 2, 3};
  // 以下是问题代码
  // reinterpret_cast用于处理无关类型之间的转换
  // 把数组首地址强制性转化为double   书本p95 
  // 把数组第一个元素的起始位置赋给double指针，但double类型占8个字节，而int型只有4个字节，
  // 那么这个就会错误地把 arr[0] arr[1] 占的空间看作是一个double类型变量空间 
  double *p = reinterpret_cast<double *>(&arr[0]);
  *p = 5;
  cout<<arr[0]<<"  "<<arr[1]<<"  "<<arr[2]<<endl;

  return 0;
}

