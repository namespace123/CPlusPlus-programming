#include <bits/stdc++.h>
using namespace std;

// ��Ԫ�ǵ����
class A
{
    int x;
    //��Ȩ��Ԫ��B
    friend class B;
  public:
    void display()
    {
      cout<<x<<endl;
    }
};

class B
{
    A a;
  public:
    void set(int i)
    {
      a.x = i;
    }
    void display()
    {
      a.display();
    }
};

int main()
{
  B b;
  b.set(2);
  b.display();
  return 0;
}

