#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a,b,c,d;
	while(cin>>a>>b>>c>>d)
	{
		cout<<setiosflags(ios::fixed);
        cout.precision(4);  
        cout<<(a*d+b*c)/(b*d)<<endl;
	}
    return 0;
}
    
