#include<iostream>
using namespace std;
void fun(int m)
{
	char ch;
	if(m<=1)
	{
		cin>>ch;
		cout<<ch;
	}
	else
	{
		cin>>ch;
		fun(m-1);
		cout<<ch;
	}
}
int main()
{
    fun(10);
	return 0;
}