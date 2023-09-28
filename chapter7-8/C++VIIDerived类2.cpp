#include <bits/stdc++.h>
using namespace std;

//#define D(a) cout<<#a<<endl;a 


// 在宏定义中，#x 表示变量x的名字，它和函数的不同在于它可以获取变量名，
// 调试的时候打印出来看变量值，方便到没话说 ( 最后面分号可加可不加 )
#define show(x) cout<<setw(30)<<#x<<" : "<<x<<endl;

// 如果语句较多时，就加{}像函数体一样去写，但要写在同一行 , 比如：
#define show(x) { cout<<setw(30)<<#x<<" : "<<x<<endl; int a = 1; int b = 2; cout<<a<<" "<<b<<endl; } 



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
  
//  Derived d;
//  d.Base1::var0 = 2;
//  d.Base1::fun0();
//  d.Base1::var0 = 3;
//  d.Base1::fun0();

  //这里使用宏定义 
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

