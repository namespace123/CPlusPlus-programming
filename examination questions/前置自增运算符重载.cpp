#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
/**
这题主要就是考前置自增运算符的重载，这里呢是将重载函数作为友元函数声明的，
比较坑的就是以对象作为形参，但是没有加引用符号，所以对象根本没有自增。
还是挺具有混淆性的，一不注意就过去了。
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


