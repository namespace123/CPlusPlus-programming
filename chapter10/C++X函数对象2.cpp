#include<iostream>
#include<numeric>
using namespace std;

class MultClass
{
  public:
    // ���غ������������
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
  // ����һ���۳ˣ�1�ǳ�ʼֵ
  cout<<accumulate(a, a + N, 1, MultClass())<<endl;
  return 0;
}

