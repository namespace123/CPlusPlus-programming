#include <bits/stdc++.h>
using namespace std;

class base
{
    int b;
  public:
    // 设置为virtual时，当派生类重写该函数时，该函数则自动变为虚函数
    virtual void test()
    {
      cout<<"基类方法！"<<endl;
    }
    // 基类的析构函数必须是虚函数，否则会造成对象释放错误的问题
    virtual ~base()
    {
    }
};

class mytest:virtual public base
{

};
class mytest2:virtual public base
{

};
class mytest3:public mytest, public mytest2
{

};

int main()
{
  // base大小 = 属性 + 虚函数指针 = 8 
  // mytest大小 = mytest2大小 = 基类属性 + 基类的虚函数指针 + 虚基类指针 = 12
  // mytest3大小 = sizeof(base)+sizeof(mytest-base)+sizeof(mytest2-base) = 16
  // 此处的虚基类virtual起到了去重的重要性，重复继承的部分只按一次算 
  cout<<"base: "<<sizeof(base)<<", mytest: "<<sizeof(mytest)<<", mytest2: "
      <<sizeof(mytest2)<<", mytest3: "<<sizeof(mytest3)<<endl;
  return 0;
}

