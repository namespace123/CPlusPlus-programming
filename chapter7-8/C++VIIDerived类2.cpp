#include <bits/stdc++.h>
using namespace std;

//#define D(a) cout<<#a<<endl;a 


// �ں궨���У�#x ��ʾ����x�����֣����ͺ����Ĳ�ͬ���������Ի�ȡ��������
// ���Ե�ʱ���ӡ����������ֵ�����㵽û��˵ ( �����ֺſɼӿɲ��� )
#define show(x) cout<<setw(30)<<#x<<" : "<<x<<endl;

// ������϶�ʱ���ͼ�{}������һ��ȥд����Ҫд��ͬһ�� , ���磺
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

  //����ʹ�ú궨�� 
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

