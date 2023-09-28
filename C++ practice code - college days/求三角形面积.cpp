#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	while(cin>>a>>b>>c)
	{
		double s,p;
		p=(a+b+c)/2;
		if(a+b<=c||a+c<=b||b+c<=a)
		{
			cout<<"-1"<<endl;
		}
		else{

		s=sqrt(p*(p-a)*(p-b)*(p-c));
	    cout<<setiosflags(ios::fixed);
        cout.precision(2);     
        cout<<s<<endl;
    }
	}
	return 0;
}
