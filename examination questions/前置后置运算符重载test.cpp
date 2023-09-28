#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class M
{
	private:
		int x, y;
		double a, b; 
	public:
		M(int xx = 0,int yy = 0, double aa = 0, double bb = 0):x(xx),y(yy), a(aa), b(bb){
		}
		void print()
		{
			cout<<x<<" "<<y<<" "<<a<<" "<<b<<endl;
		}
		// �����Զ���������ǰ�ú�������������أ���һ�����һ�������û�����һ��int�β�
        // �����һ��int���Ǻ��ã������������ǰ��
        // ���Ҷ�����������ǣ������� int��������������͵��βΣ��Ͳ��� 
		friend M operator++(M &m, int);
		friend M operator++(M &m);
		
};
 
M operator++(M &m)
{
	m.x++;
    m.y++;
    m.a++;
    m.b++;
	return m;
}
M operator++(M &m, int)
{
	m.x += 10;
    m.y += 10;
    m.a += 10;
    m.b += 10;
	return m;
}


int main()
{
	M m(10,20, 1.2, 3.4);
	m.print();
	for (int k=0;k<5;k++)
	{
		++m;
	}
	m.print();
	for (int k=0;k<5;k++)
	{
		m++;
	}
	m.print();
	return 0;
}



