#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
    {
        if(n==1) cout<<"0"<<endl;
        else
		{
			int i,t; 
            t=sqrt(n);
            for(i=2;i<=t;i++)
                if(n%i==0) break;
            if(i>t) cout<<"1"<<endl;
            else cout<<"0"<<endl;
        }
	}
    return 0;
}
