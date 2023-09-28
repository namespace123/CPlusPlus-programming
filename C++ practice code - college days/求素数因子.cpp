#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	int n;
	while(cin>>n)
	{
		int i,t;
		t=sqrt(n);
		i=2;
		for(;i<=t;)
		{
			if(n%i==0) 
			{
			    cout<<i<<ends;
			    n/=i;
			    i=2;
			    t=sqrt(n);
			}
			else i++;
		}
		cout<<n<<endl;
	}
	    
	return 0;
}
