#include <bits/stdc++.h>
using namespace std;

class A
{
    const int a; // �����ݳ�Ա
    static const int b;  // ��̬�����ݳ�Ա
  public:
    A(int i);
    void print();
};
const int A::b = 10;
A::A(int i):a(i) {} // ����Ա�����ڹ��캯���ĺ������н��и�ֵ
void A::print()
{
  cout<<a<<":"<<b<<endl;
}
int main()
{
  A a1(100), a2(0);
  a1.print();
  a2.print();
  return 0;
}

