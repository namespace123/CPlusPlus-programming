#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int r;
	double s,PI;
	cin>>r;
	PI=atan(1.0) * 4;
	s=PI*r*r;
    cout<<setiosflags(ios::fixed);
    cout.precision(7);    
	cout<<s<<endl; 
	return 0;
}
//atan()函数表示反正切值 
