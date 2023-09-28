#include <iostream>
#include <functional>
#include<boost/bind.hpp>

using namespace std;

void confun(int a,int b,int c)
{
	cout << "a=" << a << ends << "b=" << b << ends << "c=" << c << endl;
}

int main(void)
{
	auto con = bind(confun, 3, _2, _1);
	con(5,4);
}

