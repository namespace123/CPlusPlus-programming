#include <iostream>
using namespace std;
int fac(int n)
{
	int f;
	if(n==0) f=1;
	else f=n*fac(n-1);
	return f;
}
int main ()
{
	int n;
	while(cin>>n)
	{
	    cout<<fac(n)<<endl;
	}
	return 0;
}
