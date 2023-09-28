#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

// 只要不是 & 参数，值就不会被修改 
void fun(int *a,int *b)
{
	int *c;
	c = a;a = b;b = c;
}
void fun2(int * &a,int * &b)
{
	int *c;
	c = a;a = b;b = c;
}
int main()
{
	int x = 7,y=19;
	int *p = &x,*q = &y;
	cout<<*p<<" "<<*q<<endl;
	fun(p,q);
	cout<<*p<<" "<<*q<<endl;
	fun2(p,q);
	cout<<*p<<" "<<*q<<endl;
	return 0;
}
/*
7 19
7 19
19 7
*/ 



