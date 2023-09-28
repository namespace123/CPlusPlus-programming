#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int m,n;
	while(cin>>m>>n)
	{
		if(n%2!=0||(4*m-n)/2<0||(n-2*m)/2<0)
		{
			cout<<"-1 -1"<<endl;
		}
		else
		{
			cout<<(4*m-n)/2<<" "<<(n-2*m)/2<<endl;
		}
	}
	return 0;
}
