#include <bits/stdc++.h>
using namespace std;

class BaseClass
{
  public:
      void fn1()
    {
      cout<<"���û���ĺ���fn1()"<<endl;
    }
     void fn2()
    {
      cout<<"���û���ĺ���fn2()"<<endl;
    }
};
class DrivedClass: public BaseClass
{
  public:
    void fn1()
    {
      cout<<"����������ĺ���fn1()"<<endl;
    }
    void fn2()
    {
      cout<<"����������ĺ���fn2()"<<endl;
    }
};

int main()
{
  DrivedClass aDrivedClass;
  DrivedClass * pDrivedClass = &aDrivedClass;
  BaseClass *pBaseClass = &aDrivedClass;

  aDrivedClass.fn1();
  aDrivedClass.fn2();
  pBaseClass->fn1();
  pBaseClass->fn2();
  pDrivedClass->fn1();
  pDrivedClass->fn2();

  return 0;
}

