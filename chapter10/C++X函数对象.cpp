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
  // ����һ���۳ˣ�1�ǳ�ʼֵ
  // �Զ���ĺ�������
  cout<<accumulate(a, a + N, 1, mult)<<endl;
  // STL�ṩ�ı�׼������������functionalͷ�ļ���
  cout<<accumulate(a, a + N, 1, multiplies<int>())<<endl;
  return 0;
}
