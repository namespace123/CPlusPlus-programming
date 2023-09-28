#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{	
	int n,aa;
	double f=0.0;
	cin>>n;
	for(;n>0;n--)
	{
		int i=0;
		int sum=0,t=-10000,d=10000;
		for(i=0;;i++)
		{
			cin>>aa;
			if(aa==-1)
			    break;
			sum+=aa;
			if(t<aa)
			    t=aa;
			if(d>aa) d=aa;
		}
		f=(double)sum/(double)i;
		cout<<i<<endl;
		cout<<t<<endl;
		cout<<d<<endl;
		cout<<setiosflags(ios::fixed);
        cout.precision(1);     
        cout<<f<<endl;
		}
		return 0;
	}
	
