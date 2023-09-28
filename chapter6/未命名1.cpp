#include <bits/stdc++.h>
using namespace std;

#define show(x) cout<<setw(30)<<#x<<" : "<<x<<endl;

class Base0
{
  public:
    int var0;
    void fun0()
    {
      cout<<"MeMber of Base0: "<<var0<<endl;
    }
};

class Base1: virtual public Base0
{
  public:
    int var1;
};

class Base2: virtual public Base0
{
  public:
    int var2;
};

class Derived: public Base1, public Base2
{
  public:
    int var;
    void fun()
    {
      cout<<"MeMber of Derived: "<<var<<endl;
    }
};

int main()
{

    Derived d;
    Base0 *p = &d;
	show(&d);
	show(p); 
	show(&(d.Base1::var1));
	show(&(d.Base2::var2));
	show(&(d.var));
	show(&(d.Base1::Base0::var0));
	show(&(d.Base2::Base0::var0)); 

    return 0;
}

