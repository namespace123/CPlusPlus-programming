#include <bits/stdc++.h>
using namespace std;

class Base
{
  public:
    virtual void f1(int) const;
};
void Base::f1(int) const
{
  cout<<"Base::f1()"<<endl;
}


class Derived: public Base
{
  public:
    // �˴����ȱ�����const���ͻᱻϵͳʶ��Ϊ ���غ���
    // Ϊ���������н���д����д����������֮��Ľ��������override����д�� 
    void f1(int) const override;
};
void Derived::f1(int) const
{
  cout<<"Derived::f1()"<<endl;
}

int main()
{
  Base *b;
  b = new Base;
  b->f1(1);
  b = new Derived;
  b->f1(1);
  return 0;
}

