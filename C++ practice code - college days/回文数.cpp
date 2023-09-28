#include<iostream>
using namespace std;
int power(int a)
{
	int t=0,m,b=a;
	while(a!=0)
	{
		m=a%10;
		t=t*10+m;
		a/=10;
	}
	if(b==t) return 1;
	else return 0;
	
}
int main ()
{
	int n;
	while(cin>>n)
	{
		if(power(n)) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
} 
