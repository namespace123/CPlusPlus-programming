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
    // ͨ�����๹��������ʱ�����û����еĺ���ʱ����Ϊ�麯������ִ���������Ӧ��������֮����ִ�л���ԭ���� 
    // ��������£������е�����������һ���漰����̬����ĺ��� ��Ӧ�ò����麯�������� virtual ǰ׺ 
	M *p = new B;
	p->print();
	delete p;
	cout<<endl;
	
	// ����������ʱ����û�и�����  
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


