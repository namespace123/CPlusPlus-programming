#include<iostream>
using namespace std;
int main ()
{
	int a,b,r,m,n;
	cin>>a>>b;
	m=a;n=b;
	do
	{
		r=a%b;
		a=b;
		b=r;	
	}while(r!=0);
	cout<<"���Լ��Ϊ"<<a<<endl;
	cout<<"��С������Ϊ"<<m*n/a<<endl;
	return 0;
} 

