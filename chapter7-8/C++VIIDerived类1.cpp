#include <bits/stdc++.h>
using namespace std;

class Base1
{
  public:
    int var;
    void fun()
    {
      cout<<"MeMber of Base1"<<endl;
    }
};
class Base2
{
  public:
    int var;
    void fun()
    {
      cout<<"MeMber of Base2"<<endl;
    }
};
class Derived: public Base1, public Base2
{
  public:
    int var;
    void fun()
    {
      cout<<"MeMber of Derived"<<endl;
    }
};

int main()
{
  Derived d;  // �ö�����3�����ԣ������ڴ�˳�� d.Base1::var�� d.Base2::var��d.var ������ &d ���൱�� &(d.Base1::var)�� 
  cout<<&d<<endl;
  cout<<&(d.Base1::var)<<endl;
  cout<<&(d.Base2::var)<<endl;
  cout<<&(d.var)<<endl;

  return 0;
}

