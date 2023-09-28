#include<iostream>
#include<iomanip>
using namespace std; 
int main()
{
	int a;
	cin>>a;
	while(a--)
	{
		int n,k,a[1000],i;
		double s=0.00,j=0.00;
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>k) {s+=a[i];j++;}
		}
		if(j==0) cout<<"-1"<<endl;
		else {
		    cout<<setiosflags(ios::fixed);
            cout.precision(2);     
            cout<<s/j<<endl;
	    }
	}
	return 0;
}
