#include<iostream>
#include<iomanip>
using namespace std;
int main()
{	
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<setprecision(4)<<(a*d+b*c)/(b*d)<<endl;
	return 0;
}

