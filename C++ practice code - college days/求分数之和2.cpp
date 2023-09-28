#include<iostream>
using namespace std;
int main ()
{
	int a,b,c,d;
	while(cin>>a>>b>>c>>d)
	{
		int x=a*d+b*c;
		int y=b*d;
		int m,n,r;
		m=x;
		n=y;
		do
	    {
		    r=m%n;
		    m=n;
		    n=r;	
	    }while(r!=0);
	    cout<<x/m<<"/"<<y/m<<endl;	
	
	}
	return 0;
}
