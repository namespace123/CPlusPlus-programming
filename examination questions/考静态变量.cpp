#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void fun(int a)
{
	static int m = 0;
	m+=a;
	cout<<m<<endl;
 } 
int main()
{
	int i = 0,k=2;
	for (int i=1;i<=3;i++)
		fun(i*k);
	
	cout<<i<<","<<k<<endl;//���i����ѭ������iŶ��
	return 0;
}
/*
2
6
12
0,2
*/


