#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class M
{
	public:
		M(){
			cout<<"M:start"<<endl;
		}
		virtual void print()
		{
			cout<<"this is M class"<<endl;
		}
		~M()
		{
			cout<<"end of M"<<endl;
		}
};
class B:public M
{
	public:
		B(){
			cout<<"B:start"<<endl;
		}	
		void print()
		{
			cout<<"this is B class"<<endl;
		 } 
		 ~B()
		 {
		 	cout<<"end of B"<<endl;
		 }
};
int main()
{
    // 通过基类构造派生类时，调用基类中的函数时，若为虚函数，则执行派生类对应函数；反之，则执行基类原函数 
    // 这种情况下，基类中的析构函数、一切涉及到多态问题的函数 都应该采用虚函数，加上 virtual 前缀 
	M *p = new B;
	p->print();
	delete p;
	cout<<endl;
	
	// 构造派生类时，则没有该问题  
	B *p2 = new B;
	p2->print();
	delete p2;
	return 0;
}

/**
M:start
B:start
this is B class
end of M

M:start
B:start
this is B class
end of B 
end of M
*/


