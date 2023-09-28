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
	cout<<"最大公约数为"<<a<<endl;
	cout<<"最小公倍数为"<<m*n/a<<endl;
	return 0;
} 

