#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
/**
������Ҫ���ǿ�ǰ����������������أ��������ǽ����غ�����Ϊ��Ԫ���������ģ�
�ȽϿӵľ����Զ�����Ϊ�βΣ�����û�м����÷��ţ����Զ������û��������
����ͦ���л����Եģ�һ��ע��͹�ȥ�ˡ�
*/
class M
{
	private:
		int x,y;
	public:
		M(int xx = 0,int yy = 0):x(xx),y(yy){
		}
		void print()
		{
			cout<<x<<" "<<y<<endl;
		}
		friend M operator++(M m);
};
 
M operator++(M m)
{
	m.x++;
    m.y++;
	return m;
}
int main()
{
	M m(10,20);
	m.print();
	for (int k=0;k<5;k++)
	{
		++m;
	}
	m.print();
	return 0;
}
/*
10 20
10 20
*/


